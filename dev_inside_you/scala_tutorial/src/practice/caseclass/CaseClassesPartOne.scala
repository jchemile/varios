package practise.caseclass

object CaseClassesPartOne {

  def main(args: Array[String]): Unit = {
    println("*"*150)

    code(args)

    println("*"*150)
  }

  def code(args: Array[String]): Unit = {
    val tuple = new T3("favorite number", 1337, true)

    println(tuple._2)
    println(tuple.productArity)
    println(tuple.productElement(1))


  }
}

class T3(
  override val _1: String,
  override val _2: Int,
  override val _3: Boolean,
)extends P3

trait P3 extends Product {
  def canEqual(that: Any): Boolean =
    that.isInstanceOf[P3]

  def productArity: Int = 3
  def productElement(n: Int): Any = n match {
    case 0 => _1
    case 1 => _2
    case 2 => _3
    case _ => throw new IndexOutOfBoundsException(n.toString)
  }

  def _1: String
  def _2: Int
  def _3: Boolean
}