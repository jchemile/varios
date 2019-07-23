object SalaryComponent {

  class SalaryComponent(val componetType: String, val amountPercentage: Double)

  val houseRentAllowance = new SalaryComponent("benefit", 40)
  val medicalAllowance = new SalaryComponent("benefit", 5)
  val pension = new SalaryComponent("deduction", 3)
  val incomeTax = new SalaryComponent("deduction", 20)

  val components: List[SalaryComponent] = List(houseRentAllowance, medicalAllowance, pension, incomeTax)

  val baseSalary: Double = 15000


  val componentSalary =
    components.foldLeft(baseSalary){(salary: Double, component: SalaryComponent) =>
      component.componetType match{
        case "benefit" => salary * (1+ component.amountPercentage/100)
        case "deduction" => salary * (1 - component.amountPercentage/100)
      }
    }


  def implementation(): Unit = {

    println(componentSalary)
  }

}
