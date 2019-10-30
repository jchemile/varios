package Sorting;

import java.util.ArrayList;
import java.util.List;

public class Sorting {

    public static void shSort(ArrayList<Integer> arr, int n){
        for(int gap = n/2; gap > 0; gap/=2){
            for(int i = gap; i < n; i +=1){
                int temp = arr.get(i);
                int j;
                for(j = i; j >= gap && arr.get(j -gap) > temp; j -= gap)
                    arr.set(j, arr.get(j-gap));
                arr.set(j, temp);
            }
        }
    }


    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(1);
        arr.add(2);
        arr.add(3);
        arr.add(4);
        arr.add(5);
        System.out.println(arr);




    }
}
