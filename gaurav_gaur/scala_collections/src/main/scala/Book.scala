object Book {

  class Book(val name: String, val publication: String, val cost: Double)

  val books = List (
    new Book("Programming in scala", "Artima", 32.74),
    new Book("Functional Programming in Scala", "Manning", 23.79),
    new Book("Scala for impatients", "Addison-Wisely", 28.79),
    new Book("Scala Cookbok", "O'Reilly", 43.00),
    new Book("Scala Puzzlers", "Artima", 23.00),
    new Book("Intro to Art of Programming using Scala", "CRC Press", 123.22)
  )

  def implementation(): Unit = {

    println(books.filter(book => book.cost < 30.00).map(budgetBook => budgetBook.name))
    println(books.filterNot(book => book.cost < 30.00).map(budgetBook => budgetBook.name))
    println(books.find(book => book.cost < 30.00).map(myBook => myBook.name))
    println(books.find(book => book.cost < 30.00).map(myBook => myBook.name))
    println(books.exists(book => book.cost < 30.00))

    for(book <- books if book.cost < 30.00) yield println(book.name)




  }

}
