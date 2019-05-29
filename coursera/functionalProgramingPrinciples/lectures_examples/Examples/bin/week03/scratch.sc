package week03

import week03._

object scratch {
     new Rational(1,2)                            //> res0: week03.Rational = week03.Rational@7d417077
     println(new Rational(1,2))                   //> week03.Rational@6b71769e
     
     def error(msg:String) = throw new Error(msg) //> error: (msg: String)Nothing
     
     val x = null                                 //> x  : Null = null
     val y: String = null                         //> y  : String = null
     

     if (true) 1 else false                       //> res1: AnyVal = 1
     
}