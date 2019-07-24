object ScalaMaps {


  val menu = Map(
    "Pasta" -> 9.95,
    "Pizza" -> 11.95,
    "Brownie" -> 5.75,
    "Lemonade" -> 3.25)

  def fetchPrice(item: String) = {
    if(menu.contains(item)) println(s"$item cost " + menu(item))
    else println(s"We do not serve $item")
  }

  def fetchPrice2(item:String) = menu.get(item) match {
    case None => s"We do not serve $item"
    case Some(price) => s"$item cost " + price
  }

  val items  =  List("Pasta", "Pizza","Brownie", "Lemonade")

  val prices = List(9.95,11.95,5.75,3.25)

  val menu_from_lists = items.zip(prices).toMap

  def implementation(): Unit ={

    fetchPrice("Pizza")
    fetchPrice("Burger")

    println(fetchPrice2("Pizza"))
    println(fetchPrice2("Burger"))

    println("----------------------")

    for((key, value) <- menu) println(s"$key costs $value")

    println("----------------------")

    menu.foreach({case(k,v) => println(s"$k costs $v")})

    println("----------------------")

    println(menu_from_lists)



  }

}
