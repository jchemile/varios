package excepciones;

import javax.swing.*;

public class Varias_Excepciones {
    public static void main(String[] args) {

        try {
            division();
        } catch (ArithmeticException e){
            System.out.println("Estas dividiendo por 9");
        } catch (NumberFormatException e){
            System.out.println("No has introducido un numero");
            //System.out.println(e.getMessage());
            System.out.println("Se ha generado un error de este tipo: " + e.getClass().getName());
        }

    }

    static void division(){
        int num1 = Integer.parseInt(JOptionPane.showInputDialog("Dividendo"));
        int num2 = Integer.parseInt(JOptionPane.showInputDialog("Divisor"));

        System.out.println("Division: " + num1/num2);
    }
}
