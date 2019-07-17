import scala.annotation._

object tail_recursion {

  //Recursive algorithm without tail recursion
  def gdc(a: Int, b: Int): Int = {
    if (b == 0) a
    else gdc(b, a % b)
  }


  def sum(num: Int): Int = {
    if (num == 1) 1
    else sum(num - 1) + num
  }

  //tail recursion
  @tailrec
  def sum_tail_rec(num: Int, res: Int): Int = {
    if(num == 1) res
    else sum_tail_rec(num - 1, res + num)
  }
}
