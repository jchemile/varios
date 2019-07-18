object PartialFunction {

  val squareRoot = new PartialFunction[Double, Double]{
    def apply(x: Double) = Math.sqrt(x)
    def isDefinedAt(x: Double) = x > 0
  }

  /*
  val squareRoot2 = PartialFunction[Double, Double] = {
    case d: Double if d > 0 => Math.sqrt(d)
  }
  */

  def implementation(): Unit ={
    println(squareRoot.isDefinedAt(9))
    println(squareRoot(9))
  }

}
