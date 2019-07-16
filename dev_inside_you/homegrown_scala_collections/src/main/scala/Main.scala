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

    val moreFakeNumbers =
      Set(
        "4120424088759203",
        "4532961442644821",
        "4485306441082294667",
        "2221002535440783",
        "5259284272662997",
        "2221004315332370",
        "376660123937317",
        "374182544436110",
        "343743655350859",
        "6011375802857284",
        "6011385367628376",
        "6011848286584195202",
        "3544514729746757",
        "3589444802610587",
        "3537290489478762729",
        "5536235171178092",
        "5452698692966040",
        "5408649754399609",
        "30351814867520",
        "30272122132037",
        "30457058118833",
        "36467746730224",
        "36225882575187",
        "36693470235250",
        "6759141347365605",
        "5018828733502598",
        "5893193656934959",
        "4175003822887142",
        "4508468845552676",
        "4026424318853573",
        "6373682081566219",
        "6390160147595448",
        "6395040072621630"
      ).map(CreditCard)

     val (valid, invalid) =
       moreFakeNumbers.partition(_.isValid)

    if(invalid.nonEmpty){
      println()
      invalid foreach println
    }

    println()

    println("Yo can also pass in the credit card number as a command line argument like this: run 6759141347365605")


  }

}
