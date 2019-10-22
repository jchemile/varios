package practise.caseclass

final class Human(
                   val name: String,
                   val age: Int,
                   val isMale: Boolean
                 ) {
  def isFemale: Boolean = !isMale

  override def toString:String =
    s"Human($name, $age, $isMale)"

  override def equals(other: Any): Boolean = other match {
    case that: Human =>
      this.name   == that.name &&
      this.age    == that.age  &&
      this.isMale == that.isMale

    case _ => false
  }

}

object Human extends ((String, Int, Boolean) => Human){
  override def apply(
             name: String,
             age: Int,
             isMale: Boolean
           ): Human = new Human(name, age, isMale)

  override def toString: String =
    "Human"


}
