package week03

class Rational(x:Int, y:Int) {
  require(y != 0, "denominator must be nonzero")
  
  def this(x: Int) = this(x,1)
  
  private def gcd(a: Int, b: Int): Int = if(b == 0) a else gcd(b, a %b)
  
  private val g = gcd(x,y)
  def number = x / g
  def denom = x / g
  
  def < (that: Rational) = number * that.denom < that.number * denom
  
  def max(that: Rational) = if (this < that) that else this
  
  def + (that:Rational) = 
    new Rational(
        number * that.denom + that.number * denom, denom* that.denom)
}