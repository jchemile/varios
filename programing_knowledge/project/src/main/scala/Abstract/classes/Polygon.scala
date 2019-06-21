package Abstract.classes


abstract class Polygon{
  def area: Double
}

object Polygon {

  def main(args: Array[String]): Unit = {
    var rect = new Rectangle(55.2, 20.0)
    printArea(rect)
    //var tri = new Triangle()
    //printArea(tri)
  }

  def printArea(p: Polygon): Unit ={
    println(p.area)
  }

}
