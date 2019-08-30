package practise.caseclass

object File {
  def apply(location: String, name: String, extension: String): String = {
    s"$location/$name.$extension"
  }

  def unapply(path: String): Option[(String, String, String)] = ???
}
