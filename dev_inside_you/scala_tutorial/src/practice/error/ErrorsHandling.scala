package practice.error

import practice.error.Helpers._

object ErrorsHandling {
  def main(args: Array[String]): Unit = {
    println("x" * 150)

    code(args)

    println("x" * 150)
  }

  def code(args: Array[String]): Unit = {
    val file =
      new File(
        location = "../src/main/scala",
        name = "Main",
        extension = ".scala",
        content = "Hello World!"
      )

    var diskUsage = 10

    def happyPath(size: Int): Unit = {
      showGreen("Life is good")
      diskUsage += size
    }

    def safeCall(): Unit = {
      try {
        val size = file.convenientWrite()
        happyPath(size)
      }
      catch {
        case Write.Warning(message) => showYellow(message)
        case Write.Error(message) => showRed(message)
        case e: Exception =>showRed(e.toString)
      }
    }

    safeCall()
    println(s"Disk Usage: $diskUsage bytes.")
    //    optionalSize match {
//      case Write.Success(size) => happyPath(size)
//      case Write.Warning(message) => showYellow(message)
//      case Write.Error(message) => showRed(message)
//    }

  }



}
