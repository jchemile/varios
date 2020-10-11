package algorithms.sortandsearch.datastructures.collections;

object ListPractise extends App{

    println("Start")

    val nums = (2.3,7.8,3.14159,5)

    def readList(len: Int): List[Int] = {
        if(len<1) Nil
        else readInt() :: readList(len - 1)
    }

    def readListUntilQuit(): List[Int] = {
        val word = readLine()
        if(word == "quit") Nil
        else word.toInt :: readListUntilQuit()
    }

    def sumList(lst:List[Int]): Int = {
        if(lst.isEmpty) 0
        else lst.head + sumList(lst.tail)
    }

    def readNamesAndAges(): List[(String, Int)] = {
        val name = readLine()
        if(name == "quit") Nil
        else {
            val age = readInt()
            (name, age) :: readNamesAndAges()
        }
    }

    def findYoungest(lst: List[(String, Int)]): (String, Int)={
        if(lst.length == 1) lst.head
        else {
            val youngest = findYoungest(lst.tail)
            if(lst.head._2 <= youngest._2) lst.head else youngest
        }
    }

    val lst = readList(5)
    println(lst)
}
