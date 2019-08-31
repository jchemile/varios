package practice.error

class File (
           location: String,
           name: String,
           extension: String,
           content: String
           ){
  def safeWrite(): Write.Result = {
    println(s"Writing $content to $location ....")
    Thread.sleep(1000)

    Write.Success(content.size)
    //Write.Error("permission denied")
  }

  def convenientWrite(): Int = {
    println(s"Writing $content to $location ....")
    Thread.sleep(1000)

    throw Write.Warning("not enough disk space, please clean stuff")
  }
}

object Write {
  sealed trait Result
  final case class Success(size: Int) extends Result

  final case class Warning(message: String)
    extends Throwable
      with Result{
    override def toString: String =
      s"$productPrefix($message)"
  }

  final case class Error(message: String)
    extends Throwable
      with Result{
    override def toString: String =
      s"$productPrefix($message)"
  }
}
