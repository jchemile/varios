object MapAndFlatMap {

  val lst = List(1,2,3,5,6,10,13)
  val mymap = Map(1 -> "Tom", 2 -> "Max", 3 -> "John")

  def main(args: Array[String]): Unit = {
    println(lst.map(x => x * 2))
    println(lst.map(_ * 2))

    println(lst.map(x=> "hi" * x))
    println(mymap.map(x=> "hi" + x))

    println(mymap.mapValues(x => "hi " + x))
    println("hello".map(_.toUpper))

    println(List(List(1,2,3), List(3,4,5)))

    println(List(List(1,2,3), List(3,4,5)).flatten)

    println(lst.flatMap(x => List(x,x+1)))

    println(lst.filter(x => x%2==0))
  }

}
