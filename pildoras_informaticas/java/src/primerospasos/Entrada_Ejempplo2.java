package primerospasos;

import javax.swing.*;
import java.lang.Integer;

public class Entrada_Ejempplo2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String nombre_usuario = JOptionPane.showInputDialog("Introduce tu NOMBRE por favor: ");
		
		String edad = JOptionPane.showInputDialog("Introduce tu EDAD por favor: ");
		
		System.out.println("Hola, " + nombre_usuario + ". Tienes " + edad + " a�os");
		
		int edad_usuario = Integer.parseInt(edad);
	
		System.out.print("Hola, " + nombre_usuario + ". Tendr�s " +   (Integer.parseInt(edad)+1) + " a�os");

	}

}
