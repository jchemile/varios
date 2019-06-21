object ifElse {
  def main(args:Array[String]): Unit ={
    val x = 20
    var res = ""

    if(x == 20) {
      res = "x == 20"
    } else {
      res = "x != 20"
    }

    println(res)

    val res2 = if(x != 20) "x == 20" else "x != 20"
    println(res2)
  }

}
