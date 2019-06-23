object LazyEvaluation {

  class strict{
    val e = {
      println("strict")
      9
    }
  }

  class LazyEval{
    lazy val l ={
      println("lazy")
      9
    }
  }

  def main(args: Array[String]): Unit = {
    val x = new strict
    val y = new LazyEval

    println(x.e)
    println(y.l)

  }

}
