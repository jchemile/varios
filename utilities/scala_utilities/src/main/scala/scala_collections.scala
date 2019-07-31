object scala_collections {

  def main(args: Array[String]): Unit = {

    val fruitList = List("apples", "Oranges", "pears")
    val fruit = "apples" :: ("oranges":: ("pears":: Nil))
    fruit.head
    fruit.tail
    val empty1 = List()
    val empty2 = Nil

    //Combine List
    val L1 = List(1,2,3)
    val L2 = List(List(34,67,21,56,87), List(65,21,34,98,77), List(76,65,29,88,90))

    val L3 = (L1, L2).zipped.map(_ :: _)
    print(L3)


  }

}
