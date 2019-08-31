package practice.error

import java.lang

import Helpers._

object AdvancesTopics {

  def main(args: Array[String]): Unit = {
    println("-" * 150)

    code(args)

    println("-" * 150)
  }

  def code(args: Array[String]): Unit = {
    def handle: (Thread, Throwable) => Unit =
      Thread
      .currentThread
      .getUncaughtExceptionHandler
      .uncaughtException

    val GlobalHandler: Thread.UncaughtExceptionHandler = {
      (thread, throwable) =>
        showRed(s"Throwable: ${throwable.getMessage} on thread: ${thread.getName}")
    }

    //handle(Thread.currentThread, new RuntimeException("boom"))

    Thread
      .currentThread
      .setUncaughtExceptionHandler(GlobalHandler)

    //handle(Thread.currentThread, new RuntimeException("boom"))

    sys.error("boom")
  }


}
