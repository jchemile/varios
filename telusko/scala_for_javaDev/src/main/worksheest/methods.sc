case class Student(var rollno : Int, var name: String, var marks: Int)
{
   def show() =
   {
     println("Hiiii")
   }

  def >(s2 : Student) : Boolean = marks > s2.marks
}

var s1 = Student(1, "Navin", 90);
val s2 = Student(2, "Rahul", 88);

s1.>(s2)

