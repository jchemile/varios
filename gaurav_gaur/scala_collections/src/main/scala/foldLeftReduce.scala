object foldLeftReduce {

  def operation1(list: List[Int], result: Int): Int = {
    list match {
      case Nil => result
      case head :: tail => operation1(tail, result + head)
    }
  }

  def operation2(list: List[Int], f: (Int, Int) => Int, result: Int):Int = {
    list match {
      case Nil => result
      case head :: tail => operation2(tail, f, f(result, head))
    }
  }

  val sum = (a: Int, b: Int) => a + b
  val product = (a: Int, b: Int) => a * b


  def implementation(): Unit ={

    val list = List.range(1,6)
    println(list)
    println(operation1(list, 0))

    println(operation2(list, sum, 0))
    println(operation2(list, product, 1))

    println(list.foldLeft(0)((result: Int, head: Int) => sum(result, head)))

    println(list.foldLeft(20)((result:Int,head:Int) =>sum(result, head)))

    println(list.foldLeft(0)((result: Int, head: Int) => result + head))

    println(list.foldLeft(0)(_ + _))

  }

}
