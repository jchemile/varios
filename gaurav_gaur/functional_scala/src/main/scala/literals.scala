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






}
