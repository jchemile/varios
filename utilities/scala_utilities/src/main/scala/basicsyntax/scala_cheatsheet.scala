package basicsyntax

object scala_cheatsheet {

  class Student(){
    var total: Int = 0

    def calculateTotal(ma1: Int, ma2: Int): Unit ={
      total = ma1 + ma2
    }

    override def toString(): String = "("+total+")"
  }

  class Saying(){
    def say(){ println("Hi, this is a test")}
  }



  def main(args: Array[String]): Unit = {

    val juan = new Student()
    juan.calculateTotal(55,60)
    println("Grand total marks: " + juan)


    val testSay = new Saying()
    testSay.say()

  }

}
