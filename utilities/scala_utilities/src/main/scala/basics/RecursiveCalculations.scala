package basics


object RecursiveCalculations extends App{

  def countDown(n: Int): Unit ={
    if(n >= 0) {
      println(n)
      countDown(n-1)
    }
  }

  def factorial(n: Int): Long = {
    if (n> 1)
      n*factorial(n-1)
    else 1
  }


  countDown(8)
  factorial(5)
}
