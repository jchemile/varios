package exceptions;

import sun.awt.SunToolkit;

public class IllegalThreadStateException extends Thread{
    public static void main(String[] args) {
        try{
            IllegalThreadStateException d1 = new IllegalThreadStateException();
            d1.start();
            d1.start();
        } catch (java.lang.IllegalMonitorStateException e){
            e.printStackTrace();
        }

    }
}
