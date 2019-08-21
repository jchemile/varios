package practises.inheritance

class LightBulb extends Device {
  override val wattsPerSecond: Int = 100

  private[this] var _isOn: Boolean = false

  def isOn: Boolean = _isOn
  private[this] def isOn_=(newValue: Boolean): Unit ={
    _isOn = newValue
  }

  def isOff: Boolean = !isOn
  private[this] def isOff_=(newValue: Boolean): Unit ={
    _isOn = !newValue
  }

  override def turnOn(): Unit = {
    if(isOff) {
      isOn = true

      println("Light bulb on")
    }
    else
      sys.error("already on")
  }

  override def turnOff(): Unit = {
    if(isOn) {
      isOff = true

      println("Light bulb off")
    }
    else
      sys.error("already off")
  }
}
