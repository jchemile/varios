println("Start")

def buildList(n: Int, x:Double): List[Double] = {
  if(n<1) Nil else x :: buildList(n - 1, x)
}

buildList(5, 99)

buildList(5, math.random*10)

def buildListF(n: Int, x:() => Double): List[Double] = {
  if(n < 1) Nil else x() :: buildListF(n-1, x)
}

def makeRandom = math.random

buildListF(5, () => makeRandom)

def buildListN(n: Int, x: => Double): List[Double] = {
  if(n < 1) Nil else x :: buildListN(n-1, x)
}

buildListN(5, makeRandom)