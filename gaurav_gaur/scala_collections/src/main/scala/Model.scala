object Model {

  class Model(val name: String, val price: Double, val size:Double)

  class Phone(val companyName: String, val models: List[Model])

  val s8 = new Model("S8", 689.00, 5.8)

  val s8Plus = new Model("S8+", 779.00, 6.2)
  val iPhoneX = new Model("IphoneX", 999.00, 5.8)
  val iPhone8 = new Model("Iphone 8", 799.00, 5.5)
  val pixel2 = new Model("Pixel 2", 629.00, 5.0)
  val pixel2Plus = new Model("Pixel 2 Plus", 799.00, 6.0)

  val samsung = new Phone("Samsung", List(s8, s8Plus))
  val apple = new Phone("Apple", List(iPhoneX, iPhone8))
  val google = new Phone("Google", List(pixel2, pixel2Plus))

  val phones = List(samsung, apple, google)

  //Without dor yield
  val phoneList1 =
    phones.flatMap { phone =>
      phone.models.filter { model =>
        model.price < 700
      }.map { budgetModel =>
        s"${phone.companyName} ${budgetModel.name}"
      }
    }

  //whit for-yield
  val phoneList2 =
    for {
      phone <- phones
      model <- phone.models if model.price < 700
    } yield s"${phone.companyName} ${model.name}"

  val sixhinches =
    for{
      phone1 <- phones
      phone2 <- phones if phone1.companyName == phone2.companyName
      model1 <- phone1.models
      model2 <- phone2.models if model1 != model2 && model1.size < 6.0 && model2.size < 6.0
    } yield s"${phone1.companyName} ${model1.name}"



  def implementation(): Unit ={

    println(phoneList1)
    println(phoneList2)
    println(sixhinches)
  }
}
