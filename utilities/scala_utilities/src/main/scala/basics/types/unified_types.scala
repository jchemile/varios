package basics.types

object unified_types {

  def main(args: Array[String]): Unit = {
    def f(x: AnyVal) = println(x)
    def g(x: AnyRef) = println(x)
    def h(x: Any) = println(x)
  }

}
