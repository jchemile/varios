package practices.inheritance

trait Device {
  def wattsPerSecond: Int

  private[this] var _isOn: Boolean = false

  def isOn: Boolean = _isOn
  protected[this] def isOn_=(newValue: Boolean): Unit ={
    _isOn = newValue
  }

  def isOff: Boolean = !isOn
  protected[this] def isOff_=(newValue: Boolean): Unit ={
    _isOn = !newValue
  }

  final def turnOn(): Unit = {
    if(isOff) {
      isOn = true

      actuallyTurnOn()
    }
    else
      sys.error("already on")
  }

  protected[this] def actuallyTurnOn(): Unit

  final def turnOff(): Unit = {
    if(isOn) {
      isOff = true
      actuallyTurnOff()
    }
    else
      sys.error("already off")
  }

  protected[this] def actuallyTurnOff(): Unit

}


