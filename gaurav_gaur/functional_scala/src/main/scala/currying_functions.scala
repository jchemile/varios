object currying_functions {

  val addTwo = (num: Int) => num + 2
  def sum = (num: Int) => num + 2

  def sum_c(num2: Int) = (num: Int) => num + num2



  def implementation() = {

    val add_Two = addTwo(10)
    println(add_Two)

    val add_two_funct = sum(10)
    println(add_two_funct)

    val add_two_funct_c = sum_c(10)(2)
    println(add_two_funct_c)
  }

}
