object ListEval_Filter {

  def findPerfectRoots(list: List[Int]): List[Int] = {
    list match{
      case Nil => Nil
      case head::tail => if(Math.sqrt(head).isWhole) head::findPerfectRoots(tail)
      else findPerfectRoots(tail)
    }
  }


  def implementation(): Unit ={

    println(findPerfectRoots(List.range(1,101)))
    println(List.range(1,101).filter(number => Math.sqrt(number).isWhole))
    println(List.range(1,101).filterNot(number => Math.sqrt(number).isWhole))
    println(List.range(1,11).partition(int => Math.sqrt(int).isWhole))






  }

}
