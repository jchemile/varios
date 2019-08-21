package practises.inheritance

object Main {
  def main(args: Array[String]): Unit = {
    println("*"*150)

    code(args)

    println("*"*150)
  }

  def code(args: Array[String]): Unit = {
    val bulb = new LightBulb
    val tv = new TV
    val meter = new EnergyMeter(bulb)

    meter.startMeasuring()
    Thread.sleep(1000)
    meter.stopMeasuring()
    println(meter.wattsConsumedInTotal)

    println()

    meter.startMeasuring()
    Thread.sleep(1000)
    meter.stopMeasuring()
    println(meter.wattsConsumedInTotal)
  }
}
