package stackoverflow

object SortNumericData {

  implicit class MedianSeq[T](seq:Seq[T]){
    def median(implicit num: Numeric[T]): Option[Double] = {
      val sorted = seq.sorted
      val fractionalMidPoint: Double = sorted.size / 2.0

      sorted.size match {
        case x if x < 2 => None
        case x if x == 2 => Some(num.toDouble(num.plus(seq(0), seq(1)))/2)
        case x =>
          if(fractionalMidPoint % 2 != 0.0) {
            Some(num.toDouble(sorted(fractionalMidPoint.toInt)))
          }else {
            val a = sorted(fractionalMidPoint.toInt - 1)
            val b = sorted(fractionalMidPoint.toInt)
            Some(num.toDouble(num.plus(a,b))/2)
          }
      }
    }
  }

  def main(args: Array[String]): Unit = {

  }

}
