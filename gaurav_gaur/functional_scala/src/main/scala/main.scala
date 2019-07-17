import literals.shop

object main {

  def main(args: Array[String]): Unit = {

    val final_Price = shop.finalPrice(210, shop.blackFriday)

    println(final_Price)
    //Unname function literals

    val regular_client = shop.finalPrice(340, elem => elem * 0.65)

    println()

    println(regular_client)


  }

}
