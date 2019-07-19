object repeated_parameters {

  def showMeParameters(args: String*) = {
    args.foreach(println)
  }

  def implementation(): Unit ={

    showMeParameters("repeated", "parameters")
    showMeParameters("scala", "supports", "repeated", "parameters")

  }


}
