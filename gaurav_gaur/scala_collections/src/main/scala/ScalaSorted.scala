object ScalaSorted {

  def main(args: Array[String]): Unit = {

    val numbers = Seq(9, 24, 1, 5, 17, 15, 2)
    val cities = Seq("Tokyo", "Delhi", "Amsterdanm", "London", "New York")

    def compareCities(city1: String, city2: String) = city1.length < city2.length

    println(numbers.sorted)
    println(cities.sorted)
    println("-----------------------")
    println(cities.sortWith((city1, city2) => city1.length < city2.length))
    println("-----------------------")
    println(cities.sortWith(compareCities))
    println("-----------------------")
    println(cities.sortWith(_.length < _.length))
    println("-----------------------")

    case class DaysOnPlanet(name: String, hours: Int) extends Ordered[DaysOnPlanet]{

      def compare(that: DaysOnPlanet): Int = {
        if(this.hours == that.hours)
          0
        else if(this.hours > that.hours)
          1
        else
          -1
      }

    }

    val daysOnPlanet = List(
      DaysOnPlanet("Mercury", 1408),
      DaysOnPlanet("Venus",   2832),
      DaysOnPlanet("Earth",   24),
      DaysOnPlanet("Mars",    25),
      DaysOnPlanet("Jupyter", 10),
      DaysOnPlanet("Saturn",  11),
      DaysOnPlanet("Uranus",  17),
      DaysOnPlanet("Neptune", 16),
      DaysOnPlanet("Pluto",   153))

    daysOnPlanet.sortBy(_.name).foreach(println)
    println("-----------------------")
    daysOnPlanet.sortBy(days => days.name).foreach(println)
    println("-----------------------")
    daysOnPlanet.sortBy(_.name).foreach(println)
    println("-----------------------")
    daysOnPlanet.sorted.foreach(println)

    val array = Array("Mercury", "Venus", "Earth", "Mars", "Jupyter", "Saturn", "Uranus", "Neptune", "Pluto")

    println("-----------------------")
    scala.util.Sorting.quickSort(array)
    array.toArray.foreach(println)

  }









}
