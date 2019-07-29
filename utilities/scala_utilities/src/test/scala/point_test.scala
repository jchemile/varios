import Point._
import LineSegment._
import org.scalatest._
import Matchers._


class LineIntersectionTest extends FlatSpec with Matchers{
  val point1 = Point(20,30);
  val point2 = Point(10,35);
  val point3 = Point(100,10);
  val point4 = Point(16,45);

  val lineSegment1 = LineSegment(point1,point2);
  val lineSegment2 = LineSegment(point3,point4);

  lineSegment1.intersect(lineSegment1, lineSegment2) should be (true)


}