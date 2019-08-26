package practice.functions

object Main {

  def main(args: Array[String]): Unit = {
    println("-" * 150)

    code(args)

    println("-" * 150)
  }

  def code(args: Array[String]): Unit = {
    trait SimpleFunction1 {
      def apply(greeting: String): Unit
    }

    val totalFunction: Int => String =
      argument => "*" + argument + "*"



    val randomNumber = scala.util.Random.nextInt

    println(" " + randomNumber)
    println(totalFunction(randomNumber))

    class NameFunction1(name: String) extends SimpleFunction1{
      override def apply(argument: String): Unit = {
        println(s"Hi I'm $name. $argument")
      }
    }

    val singleton: SimpleFunction1 = new SimpleFunction1{
      override def apply(greeting: String): Unit = {
        println(s"Hi I'm a singleton it doesn't even make sense for me to have a constructor :( $greeting")
      }
    }

    val alice: SimpleFunction1 = new NameFunction1("alice")
    val bob: SimpleFunction1 = new NameFunction1("bob")

    alice("How are you going?")
    bob("What up?")
    singleton("I'm sexy and I know it.")
  }
}
