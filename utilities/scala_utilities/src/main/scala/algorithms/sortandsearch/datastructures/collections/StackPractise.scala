package algorithms.sortandsearch.datastructures.collections

import scala.collection.mutable.Stack


object StackPractise {

  def main(args: Array[String]): Unit = {

    val stack = Stack[String]("a","b","c")

    val popped = stack.pop

    println(popped)
  }



}
