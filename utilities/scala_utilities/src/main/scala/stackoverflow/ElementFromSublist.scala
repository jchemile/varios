package stackoverflow

object ElementFromSublist extends App{

  val alco = List(("Light Beer", "4%", "23 OZ"), ("Regular Beer", "6%", "23 OZ"))

//  val (_, temp, _) = alco(0)
//
//  println((_, temp, _))

  val temp2 = alco(0)._2
  println(temp2)
}
