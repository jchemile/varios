package practices

object MessagePassing {
  def main(args: Array[String]): Unit = {
    println("*"*150)

    code(args)

    println("*"*150)
  }

  def code(args: Array[String]): Unit = {

    class BankAccount(private[this] val initialBalance: Int) {
      private[this] var _balance: Int = initialBalance

      def withdraw(amount: Int): Unit =
        if(this._balance >= amount) {
          this._balance = this._balance - amount
        } else
          sys.error("Insufficient funds")


      def deposit(amount: Int): Unit =
        if(this._balance >= 1)
          this._balance = this._balance + amount
        else
         sys.error("It's only possible to deposite a positive amout")

      def balance: Int =
        this._balance
    }

    val bankAccount1 = new BankAccount(initialBalance = 100)

    bankAccount1.withdraw(10)
    println(bankAccount1.balance)

    bankAccount1.withdraw(15)
    println(bankAccount1.balance)

    println()

    bankAccount1.deposit(125)
    println(bankAccount1.balance)

    println()

    def makeTransfer(from: BankAccount, amount: Int, to: BankAccount): Unit = {
      def showBothAccount(): Unit = {
        println(s"from: ${from.balance}")
        println(s"to: ${to.balance}")
      }

      println("before")
      showBothAccount()

      from.withdraw(amount)
      to.deposit(amount)

      println()

      println("after")
      showBothAccount()
      println(s"amount: $amount")
    }

    val thisOne: BankAccount = new BankAccount(initialBalance = 50)
    val thatOne: BankAccount = new BankAccount(initialBalance = 15)

    makeTransfer(
      from = thisOne,
      amount = 20,
      to = thatOne
    )
  }
}
