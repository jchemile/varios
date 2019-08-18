object MapLecture {

  val mymap : Map[Int, String] =
    //Keys should be unique
    Map(801 -> "max", 802 -> "tom", 804 -> "july")

  def main(args: Array[String]): Unit = {

    println(mymap)
    println(mymap(802))
    println(mymap.keys)
    println(mymap.values)
    println(mymap.isEmpty)

    mymap.keys.foreach { key =>
      println("key " + key)
      println("Value " + mymap(key))
    }

    println(mymap.contains(8010000))

  }

}
