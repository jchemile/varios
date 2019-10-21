package practise

object recursion_practise {

  def main(args: Array[String]): Unit = {
    println("*"*131)


    println("*"*131)
  }

  def code(args: Array[String]): Unit = {
    val lista = List(1,2,4,5,8)

    def sum(ints: List[Int]): Int = ints match {
      case Nil => 0
      case x :: tail => x + sum(tail)
    }

    def sum2(ints: List[Int]): Int = {
      def sumAccumulator(ints: List[Int], accum: Int): Int = {
        ints match {
          case Nil => accum
          case x :: tail => sumAccumulator(tail, accum + x)
        }
      }
      sumAccumulator(ints, 0)
    }

    def sum3(xs: List[Int]): Int = {
      if (xs.isEmpty) 0
      else xs.head + sum3(xs.tail)
    }

    sum(lista)
    sum2(lista)
    sum3(lista)

    def sumWithReduce(ints: List[Int]) = {
      ints.reduceLeft(_+_)
    }

    sumWithReduce(lista)

  }

}
