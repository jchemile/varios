package threads;

import java.util.stream.IntStream;

public class SimpleThreadType2 implements Runnable {

    @Override
    public void run(){
        System.out.println("Thread execution starts " + "\n");
        IntStream.iterate(0, i -> i + 1).limit(25).forEach(i -> System.out.printf("%d ", i));
        System.out.println("Thread execution complete ");
    }

    public static void main(String[] args){
        System.out.println("Main Thread " + Thread.currentThread().getName() + "\n");
        new Thread(new SimpleThreadType2()).start();
        IntStream.iterate(0, i-> i +1).limit(3).forEach(i -> System.out.printf("%d@main ", i));
        System.out.println("Main Thread Excecution completes " + Thread.currentThread().getName()+"\n");

    }
}
