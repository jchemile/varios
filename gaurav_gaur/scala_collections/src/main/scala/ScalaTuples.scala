object ScalaTuples {

  val phoneInformation = ("Samsung", "S8", 5.8,2017)
  val yearOfRelease = ("S8" -> 2017)

  def implementation(): Unit ={

    println(phoneInformation.productArity)
    println(phoneInformation._2)

  }

}
