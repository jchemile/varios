object forLoops {
  def main(args: Array[String]): Unit = {

    for (i <- 1 to 5){
      println("i using to: " + i)
    }

    println("Using Until")

    for (i <- 1 until 6){
      println("i using until " + i)
    }

    for (i <- 1 to 9; j <- 1 to 3){
      println("i using multiple ranges: " + i + " " + j)
    }

    val lst = List(1,2,3,4,5,6,78,9,6,5);

    for (i <- lst){
      println("i using lst " + i)
    }

    for (i <- lst if i < 6){
      println("i using filters " + i)
    }

    val result = for {i <- lst; if i < 6} yield {
      i * i
    }

    print("result = "+ result)
  }

}
