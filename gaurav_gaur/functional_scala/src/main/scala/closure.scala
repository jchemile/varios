object closure {

  val serviceCharge: Double = 14

  val bill = (netBill: Double) => netBill * (1 + serviceCharge/100)





  def implementation(): Unit ={
    val test_bill = bill(30)
    println(test_bill)

  }

}
