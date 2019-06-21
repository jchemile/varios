import Array._

object Arrays {

  //Declaring Arrays
  val myarray: Array[Int] = new Array[Int](4)
  val myArray2 = new Array[Int](5)
  val myarray3 = Array(1,2,3,4)

  def main(args: Array[String]): Unit = {
    myarray(0) = 20
    myarray(1) = 50
    myarray(2) = 10
    myarray(3) = 30
    println(myarray)

    // for loop in an array
    for(x <- myarray){
      println(x)
    }

    println()

    // for loop in an array with some other methods
    for( i <- 0 to (myarray.length -1)){
      println(myarray(i))
    }
  }

  val result = concat(myarray, myarray3)

  for(x <- result){
    println(x)
  }
}
