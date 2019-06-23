import java.util.Date

object PartiallyAppliedFunctions {

  def log(date: Date, message: String) = {
    println(date + "   " + message)
  }

  def main(args: Array[String]): Unit = {
    //Fully Applied Function
    val sum = (a: Int, b:Int, c:Int) => a  +b + c
    println(sum(10,20,30))
    //Partially Applied Function
    val f = sum(10,20,_ :Int)
    println(f(30))
    //Partially Applied Function
    val g = sum(10,_:Int,_ :Int)
    println(g(100,200))

    val date = new Date;
    val newLog = log(date, _:String)

    newLog("Message 1")
    newLog("Message 2")
    newLog("Message 3")
    newLog("Message 4")



  }

}
