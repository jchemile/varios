object GradeCalculator {


  val gradeE: PartialFunction[Int, String] = {
    case marks: Int if marks >= 0 && marks < 30 => "E"
  }

  val gradeD: PartialFunction[Int, String] = {
    case marks: Int if marks >= 30 && marks < 45 => "D"
  }

  val gradeC: PartialFunction[Int, String] = {
    case marks: Int if marks >= 45 && marks < 60 => "E"
  }

  val gradeBSchool1:PartialFunction[Int, String] = {
    case marks: Int if marks >= 60 && marks < 80 => "B"
  }

  val gradeASchool1: PartialFunction[Int, String] = {
    case marks: Int if marks >= 80 => "A"
  }

  val gradeBSchool2: PartialFunction[Int, String] = {
    case marks: Int if marks >= 60 && marks < 85 => "B"
  }

  val gradeASchool2: PartialFunction[Int, String] = {
    case marks: Int if marks >= 85 => "A"
  }


  def implementation(): Unit ={

    val studentMarks = List(82,20,43)
    println(studentMarks.map(gradeE orElse gradeD orElse gradeC orElse gradeBSchool1 orElse gradeASchool1 ))

    println(studentMarks.map(gradeE orElse gradeD orElse gradeC orElse gradeBSchool2 orElse gradeASchool2 ))

  }

}
