object Phone {

  class Phone(val name: String, val model: List[String])

  val apple = new Phone("Apple", List("Iphone X", "Iphone 8"))
  val google = new Phone("Google", List("Pixel 2 XL", "Pixel"))
  val samsung = new Phone("Samsung", List("Galaxy S8", "Galaxy Note 8"))

  val phoneList = List(apple, google, samsung)


  def implementation(): Unit ={

    println(phoneList.map(phone => phone.model))
    println(phoneList.flatMap(phone => phone.model))

  }

}
