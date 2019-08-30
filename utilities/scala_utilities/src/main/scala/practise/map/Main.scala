package practise.map

import scala.util.Random

object Main {

  def main(args: Array[String]): Unit = {

    println("*" * 150)

    code(args)

    println(showNotification(someSms))
    println(showNotification(someVoiceRecording))

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {

    val x: Int = Random.nextInt(10)

    def matchTest(x: Int): String =
    x match {
      case 0 => "zero"
      case 1 => "one"
      case 2 => "two"
      case _ => "many"
    }

    println(matchTest(3))


    def tupleDemo(expr: Any) = expr match {
      case (a, b, c)  => println("matched " + a + b + c)
      case _ =>
    }

    println(tupleDemo(("a", 3, "-tuple")))

    def generalSize(x: Any) = x match {
      case s: String => s.length
      case m: Map[_,_] => m.size
      case _ => -1
    }

    println(generalSize("abc"))
    println(generalSize(Map(1 -> 'a', 2 -> 'b')))


  }


  abstract class Notification

  case class Email(sender: String, title: String, body: String) extends Notification
  case class SMS(caller: String, message: String) extends Notification
  case class VoiceRecording(contactName: String, link: String) extends Notification

  def showNotification(notification: Notification): String = {
    notification match {
      case Email(email, title, _) =>
        s"You got an email from $email with title: $title"
      case SMS(number, message) =>
        s"you received an SMS from $number! Message: $message"
      case VoiceRecording(name, link) =>
        s"you received a Voice Recording from $name! Click the link to hear it: $link"
      case _ => "No notification"
    }
  }

  val someSms = SMS("12345", "Are you there?")
  val someVoiceRecording = VoiceRecording("Tom","voicerecording./blablabla")

  println(showNotification(someSms))
  println(showNotification(someVoiceRecording))



}
