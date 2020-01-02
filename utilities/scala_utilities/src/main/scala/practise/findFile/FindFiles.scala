package practise.findFile

import java.io.File

object FindFiles extends App {
  println(System.getProperty("user.dir"))
  val path = "C:\\Users\\Joaquin Chemile\\Documents\\varios\\utilities\\scala_utilities\\src\\main\\scala\\practise\\findFile\\Data"
  val path2 = "C:\\Users\\Joaquin Chemile\\Documents\\varios\\utilities\\scala_utilities\\src\\main\\scala\\practise\\findFile\\Data\\2018"

  def getListOfFiles(dir: String):List[File] = {
    val d = new File(dir)
    if (d.exists && d.isDirectory) {
      d.listFiles.filterNot(_.isFile).toList
    } else {
      List[File]()
    }
  }

  def getListOfSubDirectories(directoryName: String) = {
    new File(directoryName)
      .listFiles
      .filter(_.isDirectory)
      .map(_.getName)
  }

  def testPaths(directoryName: String) : List[File] = {
    val d = new File(directoryName)
      //Si no es archivo seguir
        d.listFiles.toList
      //si es archivo guardar path en la lista.
    }
   val testFuncion = testPaths(path)
   getListOfFiles(path2).foreach(println)
   //getListOfSubDirectories(path).foreach(println)
   //testFuncion.foreach(println)
}
