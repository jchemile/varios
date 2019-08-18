object StringInterpolation {
  def main(args: Array[String]){
    val name = "mark"
    val age = 18

    println(name + " is " + age + " years old")
    //StringInterpolation
    println(s"$name is $age years old")
    //String interpolation with type
    println(f"$name%s is $age%d years old")
    //
    println(s"Hello \nworld")
    //
    println(raw"Hello \nworld")
  }
}
