package excepciones;

import javax.swing.*;
import java.util.Scanner;

public class Areas_Peso {

    public static void main(String[] args) {
        // TODO Auto-generated method stub

        Scanner entrada = new Scanner(System.in);

        System.out.println("Elige una opción: \n1: Cuadrado \n2: Rectángulo \n3: Triángulo \n4: Círculo");

        try {
            figura = entrada.nextInt();

            //entrada.close();
        } catch (Exception e){
            System.out.println("Ha ocurrido un error");
        } finally {
            entrada.close();
        }

        switch(figura) {

            case 1:
                int lado = Integer.parseInt(JOptionPane.showInputDialog("Introduce el lado"));
                System.out.println("El área del cuadrado: " + Math.pow(lado, 2));
                break;

            case 2:
                int base = Integer.parseInt(JOptionPane.showInputDialog("Introduce la base: "));
                int altura = Integer.parseInt(JOptionPane.showInputDialog("Introduce la altura: "));
                System.out.println("El área del rectangulo: " + (base * altura));
                break;

            case 3:
                base = Integer.parseInt(JOptionPane.showInputDialog("Introduce la base: "));
                altura = Integer.parseInt(JOptionPane.showInputDialog("Introduce la altura: "));
                System.out.println("El área del triangulo: " + (base * altura)/2);

                break;

            case 4:
                int radio = Integer.parseInt(JOptionPane.showInputDialog("Introduce el radio: "));
                System.out.print("El área del círculo: ");
                System.out.printf("%1.2f", (Math.PI*(Math.pow(radio,2))));

                break;

            default:
                System.out.println("La opción no es correcta");

        }

        int altura = Integer.parseInt(JOptionPane.showInputDialog("Introduce tu altura en cm"));
        System.out.println("Si eres hombre tu peso ideal es: " + (altura - 110) + " kg");
        System.out.println("Si eres  mujer tu peso ideal es: " + (altura - 120) + " kg");
    }
    static int figura;
}
