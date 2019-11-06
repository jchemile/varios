package practise

object scala_collections {

  def main(args: Array[String]): Unit = {

    println("*"*150)

    map_practise(args)

    println("*"*150)


    /*
    val fruitList = List("apples", "Oranges", "pears")
    val fruit = "apples" :: ("oranges":: ("pears":: Nil))
    fruit.head
    fruit.tail
    val empty1 = List()
    val empty2 = Nil

    //Combine List
    val L1 = List(1,2,3)
    val L2 = List(List(34,67,21,56,87), List(65,21,34,98,77), List(76,65,29,88,90))

    val L3 = (L1, L2).zipped.map(_ :: _)
    print(L3)

    //Flat Map
    def isPrime(n:Int)= (2 until n) forall(n% _ != 0)
    val n = 7
    (1 until n) flatMap(i => (1 until i) map (j => (i,j))) filter (pair => isPrime(pair._1 + pair._2))

    //List Flattern
    //Original list:<br>(a, list(b,c,d))
    //Output Require:
    //(a,b)
    //(a,c)
    //(a,d)
    val example = ('a', List('b','c','d'))
    val res = example._2.map((example._1,_))

    //Maps
    */
  }

  def list_from_option_vector(args: Array[String]): Unit = {

    //Objective: Get the total count of the element.
    //Ex: If I look for Z the method should return 4

    val x = Vector(
      Some(List(("x",2))),
      Some(List(("x",2),
        ("y",3))),
      None,
      Some(List(("x",2),
        ("z",2))),
      Some(List(("x",2),("z",2))),
      None)

    val x2 = x.flatMap{
      case Some(l) => l.filter(_._1=="x").map(_._2)
      case None => List(0)
    }.sum

    println(x2)

  }

  def list_practise(args: Array[String]): Unit = {

    val a = List(13, 17, 99, 54)

    def last[T](xs: List[T]): T =xs match {
      case List() => throw new Error("last of empty list")
      case List(x) => x
      case y :: ys => last(ys)
    }

    println(last(a))

    def init[T](xs: List[T]): List[T] = xs match {
      case List() => throw new Error("init of empty list")
      case List() => List()
      case y :: ys => y :: init(ys)
    }

    println(init(a))


    def reverse[T](xs: List[T]): List[T] = xs match {
      case List() => xs
      case y :: ys => reverse(ys) ++ List(y)
    }

    def removeAt[T](n: Int, xs: List[Int]) = (xs take n) ::: (xs drop n+1)

  }

  def map_practise(args: Array[String]): Unit = {
    val romanNumerals = Map("I" -> 1, "V" -> 5, "X" -> 10)
    val capitalOfCountry = Map("US" -> "Washington", "Switzerland" -> "Bern")

    capitalOfCountry get "US"

    def showCapital(country: String) = capitalOfCountry.get(country) match {
      case Some(capital) => capital
      case None => "missing data"
    }

    showCapital("US")

    val fruit = List("apple", "pear", "orange", "pineapple")

    fruit sortWith(_.length < _.length)

    fruit.sorted

    fruit groupBy(_.head)

  }

  def code (args: Array[String]): Unit = {


  }

}
