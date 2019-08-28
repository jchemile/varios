package practise.caseclass

object CaseClassPartOneV2 {

  def main(args: Array[String]): Unit = {
    println("*"*150)

    code(args)

    println("*"*150)
  }

  def code(args: Array[String]): Unit = {
    val person = new Person("Bob", 27, true)
    println(person.isMale)
    println(person.isFemale)
    println(person)
    println(Person)
    println(person.isInstanceOf[Function3[_, _, _, _]])
    val personFactory: (String, Int, Boolean) => Person =
      Person

    println(Console.MAGENTA + "*"*150 + Console.RESET)

    val human = Human("Bob", 27, true)
    println(human.isMale)
    println(human.isFemale)
    println(human)
    println(Human)
    println(Human.isInstanceOf[Function3[_, _, _, _]])
    val humanFactory: (String, Int, Boolean) => Human =
      Human

  }
}
