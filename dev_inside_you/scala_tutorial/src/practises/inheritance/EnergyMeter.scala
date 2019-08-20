package practises.inheritance

class EnergyMeter(device:Device){
  private[this] var turnedOnAtMillis: Long = 0
  private[this] var _wattsConsumedInTotal: Double = 0
  def wattsConsumedInTotal: Double = _wattsConsumedInTotal
  private[this] def wattsConsumedInTotal_= (newValue: Double): Unit = {
    _wattsConsumedInTotal = newValue
  }



  def startMeasuring(): Unit = {
    device.turnOn()
  }

  def stopMeasuring(): Unit = {
    device.turnOn()

    val durationInMillis  = System.currentTimeMillis - System.currentTimeMillis
    val durationInSeconds = durationInMillis.toDouble/1000

    wattsConsumedInTotal += device.wattsPerSecond * durationInSeconds
  }
}
