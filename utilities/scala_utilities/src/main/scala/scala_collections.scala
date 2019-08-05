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

    //Flat Map
    def isPrime(n:Int)= (2 until n) forall(n% _ != 0)
    val n = 7
    (1 until n) flatMap(i => (1 until i) map (j => (i,j))) filter (pair => isPrime(pair._1 + pair._2))

    //List Flattern
    //Original list:<br>(a, list(b,c,d))
    //Output Require:
    //(a,b)
    //(a,c)
    //(a,d)
    val example = ('a', List('b','c','d'))
    val res = example._2.map((example._1,_))

  }

}
