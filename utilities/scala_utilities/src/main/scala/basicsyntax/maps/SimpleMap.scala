package basicsyntax.maps

import scala.util.Random

object SimpleMap {

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    println(filterValuesMap("MCO"))

    println("*" * 150)
  }

  //--------------------------------------------------------------
  //<- Practice functions
  //--------------------------------------------------------------


  def filterValuesMap(site: String): List[String] ={
    site match {
      case "1" => List(site+"1953", site+"1540", site+ "1743", site+"3025")
      case "2" => List(site+"1953", site+"1540", site+ "1743", site+"3025")
      case "7" => List(site+"1953", site+"1540", site+ "1743", site+"1196")
      case "9" => List(site+"1953", site+"1540", site+ "1743")
    }
  }


  def matchTest(x: Int): String =
    x match {
      case 0 => "zero"
      case 1 => "one"
      case 2 => "two"
      case _ => "many"
    }

  for (i <- 1 to 19){
    val x: Int = Random.nextInt(10)

    println(x + " -> " + matchTest(x))

  def code(args: Array[String]): Unit = {

    }

    def tupleDemo(expr: Any) = expr match {
      case (a, b, c)  => println("matched " + a + b + c)
      case _ =>
    }

    println(tupleDemo(("a", 3, "-tuple")))

    def generalSize(x: Any) = x match {
      case s: String => s.length
      case m: Map[_,_] => m.size
      case _ => -1
    }

    println(generalSize("abc"))
    println(generalSize(Map(1 -> 'a', 2 -> 'b')))
  }

}
