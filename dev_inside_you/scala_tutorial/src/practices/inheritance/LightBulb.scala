package practices.inheritance

class LightBulb extends Device {
  override val wattsPerSecond: Int = 100

  override protected[this] def actuallyTurnOn(): Unit = {
    println("light bulb on")
  }

  override protected[this] def actuallyTurnOff(): Unit = {
    println("light bulb off")
  }
}
