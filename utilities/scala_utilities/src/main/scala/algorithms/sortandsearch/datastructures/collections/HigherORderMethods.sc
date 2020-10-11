val nums = List(4,8,6,21,45,98,2,6,7,8,9,1)

val (evens,odds)  = nums.partition(_%2==0)

nums.count(_%2==0)

nums.forall(_%2==0)
nums.find(_>10)

nums.map(_*2)

val tups = nums.zip(nums.map(_*2))

val dist = tups.map(t => {
  val (x, y) = t
  math.sqrt(x*x+y*y)
})

tups.map(_._1)