object ListLecture {

  val mylist: List[Int] = List(1,2,5,8,9,6,4)
  val names: List[String] = List("Max", "Tom", "John")

  def main(args: Array[String]): Unit = {

    println(0 :: mylist)
    println(mylist)
    println(names)
    //Nil
    println(1::5::9::Nil)
    //Head and tail
    println(mylist.head)
    println(names.tail)
    println(names.isEmpty)

    //Reverse
    println(mylist.reverse)

    //Fill Methods
    println(List.fill(5)(2))

    println(mylist.max)

    mylist.foreach( println )
    var sum: Int = 0
    mylist.foreach(sum += _)
    println(sum)

    for(name <- names){
      println(name)
    }


  }

}
