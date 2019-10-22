package practise.caseclass

object File {
  def apply(location: String, name: String, extension: String): String = {
    s"$location/$name.$extension"
  }

  def unapply(path: String): Option[(String, String, String)] =
    if(path == null || path.isEmpty)
      None
  else{
      val lastIndexOfSlash = path.lastIndexOf("/")
      val lastIndexOfDot   = path.lastIndexOf(".")
      val location         = path.substring(0, lastIndexOfSlash)
      val name             = path.substring(lastIndexOfSlash + 1, lastIndexOfDot)
      val extension        = path.substring(lastIndexOfDot + 1)

      Some(
        (
          location,
          name,
          extension
        )
      )
    }
}

case class File (
                location: String,
                name: String,
                extension: String
                ){
  override def toString: String =
    s"$location/$name.$extension"
}

object IsLocationLongerThan20Characters{
  def unapply(path: String): Boolean =
    path.length > 20
}
