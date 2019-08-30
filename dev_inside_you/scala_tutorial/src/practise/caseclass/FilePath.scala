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
    println()
    println(explicitFile)
    println()
    println(explicitFile == implicitFile)


  }
}
