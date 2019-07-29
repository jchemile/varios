sealed trait Shape

case class Point(x: Int, y: Int) extends Shape {
  //require(x != null & y !=null, "null values for point")
}

case class LineSegment(point1: Point, point2: Point)  extends Shape {
  require(point1 != point2)

  def intersect(lineSegment1: LineSegment, lineSegment2:LineSegment):
  Boolean ={
    // val A1, A2, B1, B2, C1, C2
    val A1 = lineSegment1.point2.y - lineSegment1.point1.y
    val B1 = lineSegment1.point1.x - lineSegment1.point2.x
    val C1 = A1 * lineSegment1.point1.x + B1 * lineSegment1.point1.y

    val A2 = lineSegment2.point2.y - lineSegment2.point1.y
    val B2 = lineSegment2.point1.x - lineSegment2.point2.x
    val C2 = A2 * lineSegment2.point1.x + B2 * lineSegment2.point1.y

    val det = A1 * B2 - A2 * B1
    if(det == 0)
      return false
    else
      return true
  }
}