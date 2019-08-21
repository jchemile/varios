package practises.inheritance

class TV extends Device {

  override val wattsPerSecond: Int = 500

  override def turnOn(): Unit = {
    println("tv on")
  }

  override def turnOff(): Unit = {
    println("tv off")
  }

}
