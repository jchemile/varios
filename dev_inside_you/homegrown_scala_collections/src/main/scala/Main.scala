object Main {

  def main(args: Array[String]): Unit = {
    println("-"*50)

    code(args)

    println("-" * 50)
  }

  private def code(args: Array[String]): Unit = {
    args
      .headOption
      .map(CreditCard)
      .map(println)
      .getOrElse(runDemo)
  }
  private def runDemo(): Unit = {

    val validCard: CreditCard.Valid =
      CreditCard()

    println(validCard)
    println(validCard.number)
    println(validCard.isValid)

    println()

    val invalidCard: CreditCard =
      CreditCard("1234567812345678")

    println(invalidCard)
    println(invalidCard.number)
    println(invalidCard.isValid)

    println()

    val fakeNumbers = 1 to 10000 map (_ => CreditCard())

    println(fakeNumbers.forall(_.isValid))


  }

}
