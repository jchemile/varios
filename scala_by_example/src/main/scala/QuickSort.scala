object QuickSort {

  def custom_quick_sort(xs: Array[Int]): Unit ={

    def swap(i:Int, j:Int) = {

      val t = xs(i); xs(i) = xs(j); xs(j) = t

    }

    def sortl(l: Int, r: Int): Unit ={

      val pivot = xs((l + r)/ 2)
      var i = l; var j = r

      while(i <= j) {
        while(xs(i) < pivot) i += 1
        while(xs(j) > pivot) j -= 1
        if(i <= j){
          swap(i,j)
          i += 1
          j -= 1
        }
      }
      if (l < j) sortl(l,j)
      if (j < r) sortl(l,r)
    }
    sortl(0,xs.length - 1)

  }


}
