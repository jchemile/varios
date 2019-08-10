package project.clock

import java.util._

import scala.concurrent.duration._

object Scala {
  def tickUntilEnterIsPressed(interval: FiniteDuration)(someCode: => Unit): Unit = {
    val timer: Timer = new Timer

    val delayInMilliseconds: Long = 0
    val periodInMilliseconds: Long = interval.toMillis

    val timerTask: TimerTask = new TimerTask {
      def run(): Unit = {
        someCode
      }
    }

    timer.scheduleAtFixedRate(
      timerTask,
      delayInMilliseconds,
      periodInMilliseconds
    )

    io.StdIn.readLine
    timer.cancel()
  }


  def loop(times: Int)(someCode: => Unit): Unit = {
    1 to times foreach{ _ =>
      someCode
    }
  }

  def wait(delay: FiniteDuration): Unit = {
    Thread.sleep(delay.toMillis)
  }

}
