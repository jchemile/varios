package practise.caseclass

final case class Person(name: String, age: Int, isMale: Boolean){
  def isFemale = !isMale
}
