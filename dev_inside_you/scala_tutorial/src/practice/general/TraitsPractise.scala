package practice.general

object TraitsPractise {

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {
    class Animal

    trait Pet {
      def allowedToSleepInBed: Boolean
      def disallowedToSleepInBed: Boolean =
        !allowedToSleepInBed

    }

    class Cat extends Animal with Pet {
      val allowedToSleepInBed: Boolean = true
    }

    class Turtle extends Animal with Pet {
      val allowedToSleepInBed: Boolean = false
    }

    def show(pet: Pet): Unit = {
      println(pet.disallowedToSleepInBed)
    }

    ///show(new Cat)
    //show(new Turtle)



    trait Timestamp {
      val creationTime: String = {
        val formatter =
          java.time.format
          .DateTimeFormatter
          .ofPattern("HH:mm:ss")

        java.time
          .LocalDateTime
          .now
          .format(formatter)
      }
    }

    val path = "C:\\Users\\Joaquin Chemile\\Documents\\varios\\dev_inside_you\\scala_tutorial\\src\\practices\\traits\\Main.scala"

    type TooLazyToType = java.io.File with Timestamp
    val file: TooLazyToType = new java.io.File(path) with Timestamp

    def showName(file: TooLazyToType): Unit = {
      println(file.getName)
    }

    def showCreationTime(timestamp: TooLazyToType): Unit = {
      println(file.creationTime)
    }

    showName(file)
    showCreationTime(file)

  }

}
