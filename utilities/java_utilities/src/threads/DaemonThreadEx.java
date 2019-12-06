package threads;

import java.util.stream.IntStream;

public class DaemonThreadEx extends Thread {

    @Override
    public void run(){
        System.out.println("Is started thread daemon? " + this.isDaemon());
        System.out.println("Thread execution starts " + this.getPriority());
        IntStream.iterate(0, i-> i + 1).limit(10).forEach(i -> System.out.printf("%d ", i));
        System.out.println("Thread execution complete");
    }

    public static void main(String[] args){
        DaemonThreadEx example = new DaemonThreadEx();
        System.out.println("Is main thread daemon ? " + Thread.currentThread().isDaemon());
        example.setDaemon(true);
        example.start();
        IntStream.iterate(0, i -> i + 1).limit(3).forEach(i -> System.out.printf("%d@main ", i));
    }
}
