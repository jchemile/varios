package homegrown.collections

trait FoldableFactory[+Element] extends Foldable[Element] {
  protected  def empty: FoldableFactory[Nothing]

  final def add[Super >: Element](input: Super): FoldableFactory[Super]

  def map[Result](function: Element => Result): Set[Result] =
    fold(FoldableFactory[Result])(_ add function(_))

}
