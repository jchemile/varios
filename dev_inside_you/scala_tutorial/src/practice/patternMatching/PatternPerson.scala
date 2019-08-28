package practice.patternMatching

object PatternPerson {

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {
    def method(input: Any): Any = input match {
      case person: Person if person.isAdult =>
        s"guard: ${person.isAdult}"


      case person: Person =>
        person.name
    }


    def show(input: Any): Unit = {
      println(method(input))
    }

    val alice =
      new Person(
        name = "Alice",
        age = 27
      )

    show(alice)
  }
}

final case class Person(name: String, age: Int) {
  def isAdult: Boolean = age >= 18
}
