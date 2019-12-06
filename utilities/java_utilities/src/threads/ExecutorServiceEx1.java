package threads;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class ExecutorServiceEx1 {

    public static void main(String[] args) {
        ExecutorService executor = Executors.newSingleThreadExecutor();
        System.out.println("Main Thread start " + Thread.currentThread().getName()+"\n");

        executor.submit(() -> {
            try{
                System.out.println("Task thread starts: " + Thread.currentThread().getName()+"\n");
                Thread.sleep(5000);
            } catch(InterruptedException iex) {
                iex.printStackTrace();
            }
            System.out.println("Task thread ends:" + Thread.currentThread().getName()+"\n");
        });
        executor.shutdown();
        System.out.println("Main Thread shut down the executor " + Thread.currentThread().getName()+"\n");
    }
}
