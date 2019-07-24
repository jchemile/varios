object ScalaOptions {

  def fraction(num: Double, den: Double): Option[Double] = {
    if (den == 0) None
    else          Some(num/den)
  }



  def test_pattern_match(val_1: Int, val_2: Int): Unit ={

   fraction(val_1,val_2) match {
      case Some(value) => println(value)
      case None => println("Denominator can not be zero")
    }

  }


  def implementation(): Unit = {

    println(fraction(22,7))
    println(fraction(22,7).get)
    println(fraction(22,0))

    val testMe: Option[String] = Some("Test Me Value")
    println(testMe.isDefined)
    println(testMe.isEmpty)

    val testMe2: Option[String] = None
    println(testMe2.isDefined)
    println(testMe2.isEmpty)

    println(fraction(22,7)getOrElse("Denominator cannot be zero"))

    println(fraction(22,0)getOrElse("Denominator cannot be zero"))


    test_pattern_match(22,7)
    test_pattern_match(22,0)






  }

}
