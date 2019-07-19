object GradesCalculator_RepeatedParameter {

  def gradeCalculator(scores: Int*): String ={
    val average = scores.sum/scores.length

    average match {
      case average > 70 => "A"
      case average < 30 => "C"
      case _ => "B"
    }
  }

  def implementation(): Unit ={

    gradeCalculator(40,50,80,90)

  }

}
