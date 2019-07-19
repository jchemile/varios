object lazy_eval {

  def method1(n: Int)={
    println("Method 1")
    println(n)
  }

  def method2(n: => Int)  {
        println("Method 2")
        println(n)
  }

  val add = (a:Int, b:Int) => {println("Add numbers"); a + b}


  def implementation(): Unit ={
    println(method1(add(3,4)))
    println(method2(add(3,4)))
  }


}