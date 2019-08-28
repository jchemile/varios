package practice.patternMatching

import practice.inheritance.Main

object PatternMatching {

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(arg: Array[String]): Unit = {
    val one = 1

    def method(input: Any): Any = input match {
      case 2 => 2
      case Main => Main
      case `one` => s"This one ${`one`}"
      case variable => input
    }

    def show(input: Any): Unit = {
      println(method(input))
    }

//    show(1)
//    show(`one`)
//    show(Top.Sub.One)

    show(this)
//    show(1)
//    show(2)
//    show(true)
//    show(false)
//    show("hi")
//    show('c')
  }


}
