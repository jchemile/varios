object ReduceLeft {

  val list = List.range(1,6)
  val reduce = list.reduceLeft((result: Int, head: Int)=> result + head)

  def implementation(): Unit ={

    println(reduce)
    println("Reduce VS Fold")

    println(List.range(1,6).foldLeft(0)(_*_))
    println(List.range(1,6).reduceLeft(_*_))

    println("Left Vs Right")
    println(List.range(1,4).reduceLeft(_-_))
    println(List.range(1,4).reduceRight(_-_))

  }

}
