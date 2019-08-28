package practice.general

object CaseClassesPartOne {

  def main(args: Array[String]): Unit = {
    println("*"*150)

    code(args)

    println("*"*150)
  }

  def code(args: Array[String]): Unit = {
    println(T3._2)
  }
}

object T3 extends Product3[String, Int, Boolean]{
  def canEqual(that: Any): Boolean =
    that.isInstanceOf[T3.type ]

  def _1: String  = "favorite number"
  def _2: Int     = 1337
  def _3: Boolean = true
}
