import org.scalatest._

class CreditCardSuite extends FunSuite with Matchers {
  test("Creating a card without passing any number should generate a valid credit card") {
    CreditCard().isValid shouldBe true
  }

  test("Creating a card without passing any number should create a card of class CreditCard.Valid") {
    CreditCard() shouldBe a[CreditCard.Valid]
  }

  test("Creating a card manually by passing a valid number should produce a valid credit card") {
    val validNumber = CreditCard().number

    CreditCard(validNumber).isValid shouldBe true

    noException should be thrownBy CreditCard(validNumber).asInstanceOf[CreditCard.Valid]
  }

  test("Credit cards's toString method should mention validity") {
    CreditCard("").toString.toLowerCase should include("invalid")
    CreditCard().toString.toLowerCase should not include "invalid"
  }

  test("All these numbers should be valid") {
    val fakeCards =
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

    all(fakeCards.map(_.isValid)) shouldBe (true)

  }

  test("10K generated numbers should all be valid") {
    val fakeCards = 1 to 10000 map (_ => CreditCard())

    all(fakeCards.map(_.isValid)) shouldBe (true)
  }

}
