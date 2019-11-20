var nums = List(4,7,2,3)

for(n <- nums)
{
  println(n)
}

nums.foreach{i: Int => println(i)}