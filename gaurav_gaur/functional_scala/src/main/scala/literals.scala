import scala.annotation._

object literals {
  @tailrec
  def sumUp(a:Int, b:Int, res:Int): Int = {
    if (a > b) res
    else sumUp(a+1,b, res + a)
  }

  //With Function Literals

  def sumUp_lit(a:Int, b:Int): Int = {

    @tailrec
    def sumUpRec(a:Int, res:Int): Int = {
      if (a > b) res
      else sumUpRec(a+1,res+a)
    }

    sumUpRec(a,0)
  }

object shop {

  val blackFriday = (price:Double) => price * 0.70
  val regularDiscount = (price:Double) => price * 0.79

  def finalPrice(price: Double, discount: Double => Double): Double = discount(price)

  //Unname function literals

  val regular_client = shop.finalPrice(340, elem => elem * 0.65)
}

  object colections_practise{

    val test_list = List(3,4,7,9,18,23)
    //changes without placeholders
    val test_list_map = test_list.map(elem => elem * 2 )
    val test_list_filter = test_list.filter(elem => elem % 2 == 0)

    //changes with placeholders
    val test_list_map_placeholder = test_list.map(_ * 2 )
    val test_list_filter_placeholder = test_list.filter(_ % 2 == 0)

    //function in which the compiler infer the data type
    val anotherFunc = (_:Int) + (_:Int)

    def collection_implmentation() = {
      println("List")
      println(literals.colections_practise.test_list)


      println("WITHOUT PLACEHOLDERS")
      println(literals.colections_practise.test_list_map)
      println(literals.colections_practise.test_list_filter)

      println("WHIT PLACEHOLDERS")
      println(literals.colections_practise.test_list_map_placeholder)
      println(literals.colections_practise.test_list_filter_placeholder)

      println("INFERRING DATA TYPE")
      println(literals.colections_practise.anotherFunc(2,8))

    }

  }





}
