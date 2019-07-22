object Map_FlatMap {

  val month = List("January", "February", "March", "April", "May", "June", "July", "August", "September", "October",
                   "November", "December")

  def upperCase(list: List[String]):List[String] = {
    list match{
      case Nil => Nil
      case head::tail => head.toUpperCase :: upperCase(tail)
    }
  }

  val isFactorOfThree = (input: Int) => if((input/3.0).isWhole) Some(input) else None

  def implementation(): Unit ={

    println(upperCase(month))

    println(month.map(x => x.toUpperCase))

    println(month.map(x => x.toUpperCase).map(x=> x.substring(0,3)))

    println(List.range(1,11).map(list => isFactorOfThree(list)))
    println(List.range(1,11).flatMap(list => isFactorOfThree(list)))


  }

}
