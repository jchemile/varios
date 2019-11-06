package options

object TestOptionHelper {

  def main(args: Array[String]): Unit = {
    import OptionHelper._

    val o1 = Some(12)
    val o2 = None

    println(o1.asEither("Missing value"))
    println(o2.asEither("Missing value"))

    println(o1.asEither("Missing value").asOption)
    println(o2.asEither("Missing value").asOption)
  }

}
