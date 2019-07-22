object List_evaluation {

  def reverse(list:List[Int]): List[Int] = {
    list match {
      case head::tail => reverse(tail) :+ head
      case Nil => List[Int]()
    }
  }
  val list = List.range(1,11)

  val list2 = List(2,4,9,8,5,14,11)

  def pickEven(list: List[Int]): List[Int] = {
    list match {
      case Nil => List[Int]()
      case List(_) => List[Int]()
      case head1 :: head2 :: tail => head2 :: pickEven(tail)
    }
  }

  def implementation(): Unit ={

    println(list)
    println(reverse(list))
    println(pickEven(list2))
    println(list.isEmpty)
    println(list.nonEmpty)
    println(list.size)
    println(list.length)

  }

}
