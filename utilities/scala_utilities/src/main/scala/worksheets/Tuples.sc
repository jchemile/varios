case class Stud(rollno: Int, name: String, marks : Int)

val students = List(Stud(1, "Navin", 40), Stud(2, "Pooja", 80), Stud(3, "Nadeem", 60), Stud(4, "Mohini", 50))

val (part1, part2) = students.partition(s => s.marks >= 60)


//val part1 = parts._1
//val part2 = parts._2

part1