package homegrown.collections

trait Factory[SubtypeOfFoldableFactory[+E] <: FoldableFactory[E, SubtypeOfFoldableFactory]] {
  final def apply[Element](element: Element, otherElement: Element*): SubtypeOfFoldableFactory[Element] =
    otherElement.foldLeft[SubtypeOfFoldableFactory[Element]](empty.add(element))(_ add _)

  def empty: SubtypeOfFoldableFactory[Nothing]
}
