/*function which uses one or more variables declared outside the function*/
import java.util.Date
object Closures {
  var number = 10
  val add = (x: Int)=> {
    number = x + number
    number
  }

  import java.util.Date
  def main(args: Array[String]): Unit = {
    number = 100
    println(add(20))
    println(number)

  }

}
