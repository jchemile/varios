package primerospasos;

import java.util.*;

public class Entrada_ejemplo1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner entrada = new Scanner(System.in);
		System.out.print("Introduce tu nombre: ");
		String nombre_usuario = entrada.nextLine();
		
		System.out.print("Introduce edad: ");
		int edad = entrada.nextInt();
		
		System.out.print("Hola " + nombre_usuario + ". El a�o que viene tendr�s " + (edad + 1) + " a�os");	

	}
}
