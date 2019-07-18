object applied_functions {

  def finalBillCalculator(serviceCharge: Int, vat: Int, netBill: Double): Double = {
    netBill + (serviceCharge * netBill)/100 + (vat*netBill)/100
  }

  def implementation()={

    val myBillCalculator = finalBillCalculator(12,20, _ : Double)

    val val_calc = myBillCalculator(120)

    println(val_calc)

  }




}

