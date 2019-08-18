object MatchExpressions {
  def main(args: Array[String]): Unit = {
    val age = "100"

    age match {
      case "20" => println(age)
      case "18" => println(age)
      case "30" => println(age)
      case "40" => println(age)
      case "50" => println(age)
      case _ => println("Default")
    }

    val result = age match {
      case "20" => age
      case "18" => age
      case "30" => age
      case "40" => age
      case "50" => age
      case _ => "Default"
    }

    println("result = "+result)

    val i = 7
    i match {
      case 1 | 2 | 5 | 7 | 9 => println("odd")
      case 2 | 4 | 6 | 8 | 10 => println("even")
    }

  }

}
