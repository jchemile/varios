package practices

object EnergyMeter {

  def main(args: Array[String]): Unit = {
    println("*" * 131)

    code(args)

    println("*" * 131)
  }

  def code(args: Array[String]): Unit = {

    class EnergyMeter(wattsPerSecond: Int, turnDeviceOn: () => Unit, turnDeviceOff: () => Unit) {
      private[this] var turnedOnAtMillis: Long = 0

      def startMeasuring(): Unit = {
        turnDeviceOn()

        turnedOnAtMillis = System.currentTimeMillis()
      }

      def stopMeasuring(): Unit = {
        turnDeviceOff()

        val durationInMilis = System.currentTimeMillis() - turnedOnAtMillis
        val durationInSecond = durationInMilis.toDouble / 1000

        println(wattsPerSecond * durationInSecond)
      }
    }

      val wattsPerSecondOfTV: Int = 500

      def turnTVOn(): Unit = {
        println("tv on")
      }

      def turnTVOff(): Unit = {
        println("tv off")
      }

      val energyMeter = new EnergyMeter(
        wattsPerSecond = wattsPerSecondOfTV,
        turnDeviceOn = () => turnTVOn(),
        turnDeviceOff = () => turnTVOff()
      )

      energyMeter.startMeasuring()
      Thread.sleep(1000)
      energyMeter.stopMeasuring()

      energyMeter.startMeasuring()
      Thread.sleep(1000)
      energyMeter.stopMeasuring()
    }
}
