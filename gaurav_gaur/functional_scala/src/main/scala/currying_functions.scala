object currying_functions {

  val addTwo = (num: Int) => num + 2
  def sum = (num: Int) => num + 2

  def sum_c(num2: Int) = (num: Int) => num + num2

  def finalPrice(vat: Double)(serviceCharge: Double)(price: Double): Double = {
    price + price * serviceCharge/100 + price*vat/100
  }

  def reduction(discount: Double, price: Double) = (1 - discount/100)*price





  def implementation() = {

    val add_Two = addTwo(10)
    println(add_Two)

    val add_two_funct = sum(10)
    println(add_two_funct)

    val add_two_funct_c = sum_c(10)(2)
    println(add_two_funct_c)

    val finalProductPrice = finalPrice(20)(12.5)(120)
    println(finalProductPrice)

    val curriedReduction = (reduction _).curried
    val discountApplied = curriedReduction(30)
    val reducePrice1 = discountApplied(210)
    println(reducePrice1)
    val reducePrice2 = discountApplied(320)
    println(reducePrice2)
  }

}
