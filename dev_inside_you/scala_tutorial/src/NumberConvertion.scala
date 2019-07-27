object NumberConvertion {

  def main(args: Array[String]): Unit = {
    println("*" * 30)

    {
      def signedBits(n:Long): Int =
        unsignedBits(n) + 1

      def unsignedBits(n:Long): Int =
        toBinary(n).size

      def toBinary(n:Long):String = {
        @scala.annotation.tailrec
        def loop(x: Long, accu: String): String =
          if(x <= 1)
            (x % 2).toString + accu
          else
            loop(
              x= x/2,
              accu = (x % 2).toString + accu
            )
        loop(n, "")
      }
      println(toBinary(0))
      println(unsignedBits(0))
      println(toBinary(1))
      println(unsignedBits(1))
      println(toBinary(2))
      println(unsignedBits(3))
      println(toBinary(3))
      println(unsignedBits(3))
      println(toBinary(4))
      println(unsignedBits(4))
      println(toBinary(73))
      println(unsignedBits(73))
    }
    println("*" * 30)
  }
}
