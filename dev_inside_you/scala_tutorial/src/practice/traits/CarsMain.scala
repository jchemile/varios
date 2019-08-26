package practice.traits

object CarsMain {

  def main(args: Array[String]): Unit = {
    println("*" * 131)

    code(args)

    println("*" * 131)
  }

  def code(args: Array[String]): Unit = {
    final class Lamborghini(override val model: String)
      extends Core.SportsCar(model)
        with Modification.Spoiler {
      override def brand: String = "Lamborghini"
    }

    final class BMW(override val model: String)
      extends Core.OrdinaryCar(model)
        with Modification.Spoiler
        with Modification.EngineControlUnit
        with Modification.TurboCharger {
      override def brand: String = "BMW"
    }

    println(new Lamborghini("Murcielago"))
    println(new BMW("M3-GTR"))
  }


}
