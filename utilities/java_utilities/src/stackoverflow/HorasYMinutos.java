package stackoverflow;

import java.util.Scanner;

public class HorasYMinutos {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        System.out.println("Introduzca hotra y minuto en formato HH:mm");
        String HoraMinuto = entrada.next();

        String[] HoraMinArray = HoraMinuto.split(":");

        int valorHora = Integer.parseInt(HoraMinArray[0]);
        int valorMinu = Integer.parseInt(HoraMinArray[1]);

        System.out.println("Hora: " + valorHora + ". Minuto: " +valorMinu);

    }

}
