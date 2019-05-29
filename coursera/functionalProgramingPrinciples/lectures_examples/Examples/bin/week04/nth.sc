package week04

import week04._

object nth {
  def nth[T](n: Int, xs: List[T]): T =
  	if (xs.isEmpty) throw new IndexOutOfBoundsException
    else if (n == 0) xs.head
    else nth(n - 1, xs.tail)                      //> nth: [T](n: Int, xs: week04.List[T])T
    
  val list = new Cons(1, new Cons(2, new Cons(3, new Nil)))
                                                  //> list  : week04.Cons[Int] = week04.Cons@1b0375b3
        
  nth(2,list)                                     //> res0: Int = 3
  nth(4,list)                                     //> java.lang.IndexOutOfBoundsException
                                                  //| 	at week04.nth$.nth$1(week04.nth.scala:7)
                                                  //| 	at week04.nth$.$anonfun$main$1(week04.nth.scala:14)
                                                  //| 	at org.scalaide.worksheet.runtime.library.WorksheetSupport$.$anonfun$$ex
                                                  //| ecute$1(WorksheetSupport.scala:76)
                                                  //| 	at org.scalaide.worksheet.runtime.library.WorksheetSupport$.redirected(W
                                                  //| orksheetSupport.scala:65)
                                                  //| 	at org.scalaide.worksheet.runtime.library.WorksheetSupport$.$execute(Wor
                                                  //| ksheetSupport.scala:76)
                                                  //| 	at week04.nth$.main(week04.nth.scala:5)
                                                  //| 	at week04.nth.main(week04.nth.scala)
  
  nth(-1, list)
}