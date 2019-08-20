package practices

object EnergyMeter {

  def main(args: Array[String]): Unit = {
    println("*" * 131)

    code(args)

    println("*" * 131)
  }

  def code(args: Array[String]): Unit = {
    class EnergyMeter(device: Device) {
      private[this] var turnedOnAtMillis: Long = 0
      private[this] var _wattsConsumedInTotal: Double = 0
      def wattsConsumedInTotal: Double = _wattsConsumedInTotal

      private[this] def watsConsumedInTotal_=(newValue: Double): Unit = {
        _wattsConsumedInTotal = newValue
      }

      def startMeasuring(): Unit = {
        device.turnOn()

        turnedOnAtMillis = System.currentTimeMillis()
      }

      def stopMeasuring(): Unit = {
        device.turnOff()

        val durationInMillis = System.currentTimeMillis() - turnedOnAtMillis
        val durationInSecond = durationInMillis.toDouble / 1000

        _wattsConsumedInTotal += device.wattsPerSecond * durationInSecond
      }
    }

    abstract class Device{
      def wattsPerSecond: Int
      def turnOn(): Unit
      def turnOff(): Unit
    }


    class TV extends Device{
      override val wattsPerSecond: Int = 500

      override def turnOn(): Unit = {
        println("tv on")
      }

      override def turnOff(): Unit = {
        println("tv off")
      }
    }

    class LightBulb extends Device {
      override val wattsPerSecond: Int = 100

      override def turnOn(): Unit = {
        println("light bulb on")
      }

      override def turnOff(): Unit = {
        println("light bulb off")
      }
    }

    val lightBulb: LightBulb = new LightBulb
    val tv: TV = new TV

    val energyMeter = new EnergyMeter(tv)

    energyMeter.startMeasuring()
    Thread.sleep(1000)
    energyMeter.stopMeasuring()
    println(energyMeter.wattsConsumedInTotal)

    energyMeter.startMeasuring()
    Thread.sleep(1000)
    energyMeter.stopMeasuring()
    println(energyMeter.wattsConsumedInTotal)
  }
}
