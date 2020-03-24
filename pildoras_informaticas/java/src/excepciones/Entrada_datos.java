package excepciones;

import java.io.IOException;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Entrada_datos {

    public static void main(String[] args) {
        System.out.println("Que deseas hacer?");
        System.out.println("1 - Introducir Datos");
        System.out.println("2 - Salir del programa");

        Scanner entrada = new Scanner(System.in);

        int decision = entrada.nextInt();

        if (decision == 1){

            try {
                PedirDatos();
            } catch(Exception e) {
                    System.out.println("Edad en formato incorrecto");
            }

        } else {
            System.out.println("Adios");
            System.exit(0);
        }

        entrada.close();
    }

        static void PedirDatos() throws IOException {

            //try {
                Scanner entrada = new Scanner(System.in);

                System.out.println("Nombre: ");
                String nombre_usuario = entrada.nextLine();

                System.out.println("Edad: ");
                int edad = entrada.nextInt();

                System.out.println("Nombre: " + nombre_usuario + " Proxima edad: " + (edad+1) );
                entrada.close();
           // } catch (InputMismatchException e) {
                //System.out.println("Edad en formato incorrecto");
           //}


        System.out.println("Fin");



        }

}
