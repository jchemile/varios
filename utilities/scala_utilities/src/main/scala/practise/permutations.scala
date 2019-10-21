package practise

object permutations {

  def main(args: Array[String]): Unit = {
    println("*"*131)

    code(args)

    println("*"*131)
  }

  def code(args: Array[String]): Unit = {

    "ABC".permutations.toList

    val bca:Char => Char = {
      case 'A' => 'B'
      case 'B' => 'C'
      case 'C' => 'A'
    }

    "ABC".map(bca)


  }

}
