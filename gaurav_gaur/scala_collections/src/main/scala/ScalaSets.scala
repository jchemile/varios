object ScalaSets {

  val words = Set("I", "Came", "I", "Saw", "I", "Conquered")
  val anotherWords = Set("We", "Came", "We", "Saw", "We", "Conquered")

  val allWords = words.++(anotherWords)
  val numbers = Set(1,2,3,4,5,6,7)

  def implementation(): Unit ={

    println(words)
    println(words.head)
    println(words.tail)
    println(words.isEmpty)
    println(allWords)

    println(numbers.min)
    println(numbers.max)
  }

}
