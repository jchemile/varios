object ScalaClasses {

  class User(private var name: String, var age: Int){
    def printName{println(name)}
  }

  def main(args: Array[String]): Unit = {
    var user = new User("Max",28 );
    user.printName
    println(user.age)
  }

}
