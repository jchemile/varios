object ScalaSorted {

  val numbers = Seq(9, 24, 1, 5, 17, 15, 2)
  val cities = Seq("Tokyo", "Delhi", "Amsterdanm", "London", "New York")

  def compareCities(city1: String, city2: String) = city1.length < city2.length

  def implementation(): Unit ={

    println(numbers.sorted)
    println(cities.sorted)

    println("-----------------------")

    println(cities.sortWith((city1, city2) => city1.length < city2.length))

    println("-----------------------")

    println(cities.sortWith(compareCities))

    println("-----------------------")

    println(cities.sortWith(_.length < _.length))


  }

}
