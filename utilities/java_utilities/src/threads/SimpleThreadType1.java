package threads;

import java.util.stream.IntStream;

public class SimpleThreadType1 extends Thread {

    @Override
    public void run(){
        System.out.println("Thread execution starts " + this.getName() + "\n");
        IntStream.iterate(0 , i -> i + 1).limit(25).forEach(i -> System.out.printf("%d ", i));
        System.out.printf("Thread execution complete" + this.getName() + "\n");
    }

    public static void main(String[] args) {
        SimpleThreadType1 obj = new SimpleThreadType1();

        System.out.println("Main Thread " + Thread.currentThread().getName()+"\n");
        obj.start();
        IntStream.iterate(0, i-> i + 1).limit(3).forEach(i -> System.out.printf("%d@main ", i));
        System.out.println("Main Thread Execution completes " + Thread.currentThread().getName()+"\n");
    }
}
