package practise.caseclass

object TuplesAndPatternMatching {

  def main(args: Array[String]): Unit = {
  println("*" * 150)

  code(args)

  println("*" * 150)

  }

  def code(args: Array[String]): Unit = {
    val f3: (String, Int, Boolean) => Unit =
      (string, int, boolean) => {
        println(int)
      }

    val f1: ((String, Int, Boolean)) => Unit =
      f3.tupled

    val person: Person =
      Person("bob", age=27, isMale = true)

    f1(
      Person
        .unapply(person)
        .get
    )
  }
}

