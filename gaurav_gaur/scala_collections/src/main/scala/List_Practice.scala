object List_Practice {

  val firstHalfYear = "January"::"February"::"March"::"April"::"June"::Nil
  //applied method.

  val secondHalfYear = List("July", "August", "September", "October", "November", "December")

  val year_1 = firstHalfYear ::: secondHalfYear

  val year_2 = firstHalfYear ++ secondHalfYear

  //Empty List

  val emptyList_1 = Nil

  val emptyList_2 = List()

  val numbers = List.range(1,11)



  def implementation() = {
    println(firstHalfYear)
    println(secondHalfYear)
    println(year_1)
    println(year_2)
    //Most Common Operations
    println(year_1.size)
    println(year_1.head)
    println(year_1.tail)

    for(month <- year_1){
      println(month)
    }

    println(numbers)
    println(numbers.map(_*2))

    val short_year = year_1.map(_.substring(0,3))

    println(short_year)

    println(year_1.zip(short_year))

    println(numbers.reverse)

  }

}
