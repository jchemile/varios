object Formatter {

  def main(args: Array[String]): Unit = {
    println("*" * 50)

    {
      def now: String = {
        val formatter =
          java.time.format
            .DateTimeFormatter
            .ofPattern("HH:mm:ss")

        java.time
          .LocalDateTime
          .now
          .format(formatter)
      }

      def inOneLine(in:String):String = {
        val clearLine = "\u001b[2k"
        val carriageReturn = "\r"

        clearLine + carriageReturn + in
      }

      var i = 0
      while(i<5){
        Thread.sleep(1 * 1000)
        print(inOneLine(now))
        i += 1
      }
      println()


    }

    println("*" * 50)
  }
}
