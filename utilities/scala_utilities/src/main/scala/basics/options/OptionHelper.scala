package basics.options

object OptionHelper {
  implicit class OptionToEither[A](opt:Option[A]){
    def asEither[ERR](err: => ERR): Either[ERR, A] = {
      opt match {
        case Some(v)    => Right(v)
        case None       => Left(err)
      }
    }
  }

  implicit class EitherToOption[A](ei: Either[_, A]) {
    lazy final val asOption: Option[A] = {
      ei match {
        case Right(v)   => Some(v)
        case Left(_)    => None
      }
    }
  }

  }

