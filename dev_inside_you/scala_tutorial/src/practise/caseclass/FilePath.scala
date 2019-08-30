package practise.caseclass

object FilePath {

  def main(args: Array[String]): Unit = {
    println("*"*150)

    code(args)

    println("*"*150)
  }

  def code(args: Array[String]): Unit = {
    val implicitFile: String =
      "C:/Users/User/Documents/varios/dev_inside_you/scala_tutorial/src/practise/caseclass/File.scala"

    val explicitFile: String = File (
      location  = "C:/Users/User/Documents/varios/dev_inside_you/scala_tutorial/src/practise/caseclass",
      name      = "File",
      extension = "scala"
    )

    println(implicitFile)


    implicitFile match {
      case IsLocationLongerThan20Characters() => println("Yep")
      case File(l,n,e) =>
        println(s"Location:  $l")
        println(s"Name:      $n")
        println(s"Extension: $e")
    }

  }
}
