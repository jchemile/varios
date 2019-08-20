package practices

object EnergyMeter {

  def main(args: Array[String]): Unit = {
    println("*" * 131)

    code(args)

    println("*" * 131)
  }

  def code(args: Array[String]): Unit = {
    class Device{
      var wattsPerSecond: () => Int  = () => 500
      var turnOn        : () => Unit = () => println("turned sth on")
      var turnOff       : () => Unit = () => println("turned sth off")
    }

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

        _wattsConsumedInTotal += device.wattsPerSecond() * durationInSecond
      }
    }

    /*
    object EnergyMeter{
      def apply(device: Any): EnergyMeter = device match {

        case lightBulb: LightBulb =>
          new EnergyMeter(
            wattsPerSecond = lightBulb.wattsPerSecondOf,
            turnDeviceOn = () => lightBulb.turnOn(),
            turnDeviceOff = () => lightBulb.turnOff(),
          )
        case tv: TV =>
          new EnergyMeter (
            wattsPerSecond = tv.wattsPerSecondOf,
            turnDeviceOn = () => tv.turnOn(),
            turnDeviceOff = () => tv.turnOff(),
          )
        case _ =>
          sys.error("Not a device")
      }
    }
     */

    class TV {
      def toDevice: Device = {
        val device = new Device

        device.wattsPerSecond = () => this.wattsPerSecond
        device.turnOn         = () => this.turnOn ()
        device.turnOff        = () => this.turnOff ()

        device

      }

      val wattsPerSecond: Int = 500

      def turnOn(): Unit = {
        println("tv on")
      }

      def turnOff(): Unit = {
        println("tv off")
      }
    }

    class LightBulb {
      def toDevice: Device = {
        val device = new Device

        device.wattsPerSecond = () => this.wattsPerSecond
        device.turnOn         = () => this.turnOn ()
        device.turnOff        = () => this.turnOff ()

        device

      }

      val wattsPerSecond: Int = 100

      def turnOn(): Unit = {
        println("light bulb on")
      }

      def turnOff(): Unit = {
        println("light bulb off")
      }
    }


    val lightBulb: LightBulb = new LightBulb
    val tv: TV = new TV

    val energyMeter = new EnergyMeter(tv.toDevice)

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
