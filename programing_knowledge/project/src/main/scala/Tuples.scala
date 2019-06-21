object Tuples {

  //Forms of define a tupple
  val mytuple = (1,2, "hello", true)
  val mytuple2 = new Tuple3(1,2, "hello")
  val mytuple3 = new Tuple3(1,"Hello", (2,3))

  def main(args: Array[String]): Unit = {
    println(mytuple._1)
    println(mytuple._2)
    println(mytuple._3)
    println(mytuple._4)


    //Iterate in a tuple
    mytuple.productIterator.foreach{
      i => println(i)
    }

    //Only valid for two elements
    println(1 -> "Tom" -> true)
  }

}
