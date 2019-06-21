object AnonymousFunction {

  object Math {
    def +(x: Int = 45, y: Int = 15): Int = {
      return x+y
    }
    def **(x: Int) = x*x
  }

  def print(x: Int, y: Int): Unit = {
    println(x+y)
  }

  def main(args: Array[String]): Unit = {

    //Anonymous Function work simliar to add function.
    var add = (x: Int, y: Int) =>  x + y
    println(add(300,500))

    val sum = 10 * 20
    print(100,200)
    println(Math.+(60, 15))
    println(Math ** 3)
  }

}
