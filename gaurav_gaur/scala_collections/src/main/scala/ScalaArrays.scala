object ScalaArrays {

  val array: Array[String] = new Array[String](3)
  val array2 = Array("Scala", "Java", "Python")

  def implementation(): Unit ={
    array.foreach(println)
    array2.foreach(println)
  }

}
