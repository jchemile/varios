object GuessGame {

  val number = 25 + scala.util.Random.nextInt(50)

  def validateGuess(lower: Int, guess: Int, higher: Int, message: String): Unit ={
    if(lower <= guess && guess <= higher) println(message)
    else println(s"You Lost, the number was $number")
  }

  val stage1 = validateGuess(number-25, _:Int, number+25, "You won proceed to stage 2")
  val stage2 = validateGuess(number-15, _:Int, number+15, "You won proceed to stage 3")
  val stage3 = validateGuess(number-5, _:Int, number+5, s"You won, the number was $number")

  override def toString = {
    "Guess a number between 0 and 100"
  }

  def start_game(): Unit ={

  }
}
