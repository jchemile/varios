package practice.general

object StringWithLengthPractice {

  object StringWithLength {
    def apply(string:String): StringWithLength =
      new StringWithLength(string)
  }

  final case class StringWithLength(string: String){
    val length: Int = string.length

    def +(that: StringWithLength): StringWithLength =
      StringWithLength(
        this.string + that.string
      )
  }

  final case class Person(
                         name: String,
                         age:Int,
                         phone: String,
                         email: String
                         )

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {
    /*
    val result: StringWithLength =
      StringWithLength.apply("hello") + StringWithLength.apply("world")

    println()
    println(result)
    println(result.string)
    println(result.length)
    */

    val bob = Person("Bob",20,"0256154 4556", "bob@gmail.com")
    println(bob)
    println(bob.name)
    println(bob.age)
    println(bob.phone)
    println(bob.email)

  }

}
