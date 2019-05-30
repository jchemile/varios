case class Stud(rollno : Int ,name : String, marks : Int)

val students = List(Stud(1,"Navin", 40), Stud(2,"Pooja", 80), Stud(3,"Nadeem", 60), Stud(4,"Mohini",70))

val first = students.head //First Occurrence

val rest = students.tail //All the elements except the first one.

val two = students.tail.head

val toppers = students.filter(s => s.marks >= 60)

val parts = students.partition(s => s.marks >= 60)