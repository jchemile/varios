object Cafe {

  class Cafe(val serviceCharge: Double){
    val finalBill = (netBill: Double) => netBill * (1 + serviceCharge/100)
  }

  val cityCafe = new Cafe(14)
  val beachCafe = new Cafe(20)


  def implementation(): Unit = {

    println(cityCafe.finalBill(30))
    println(beachCafe.finalBill(30))

  }

}
