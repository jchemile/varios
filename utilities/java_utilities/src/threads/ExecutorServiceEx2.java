package threads;

import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class ExecutorServiceEx2 {

    public static void main(String[] args) {
        ExecutorServiceEx2 app = new ExecutorServiceEx2();
        app.execute();
    }

    public void execute()
    {
        ExecutorService executor = Executors.newFixedThreadPool(5);
        System.out.println("execute() @ Main Thread starts " + Thread.currentThread().getName()+"\n");
        executor.execute(new Task());
        executor.shutdown();
        executor.execute(new Task());

        System.out.println("Main Thread shut down the executor " + Thread.currentThread().getName()+"\n");
    }

    class Task implements Runnable{
        @Override
        public void run(){
            try{
                System.out.println("Task thread starts: "+ Thread.currentThread().getName()+"\n");
                Thread.sleep(5000);
                }catch (InterruptedException iex){
                        iex.printStackTrace();
            }
            System.out.println("Task thread ends:" + Thread.currentThread().getName()+"\n");
        }
    }
}
