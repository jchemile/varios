package primerospasos;

import java.util.*;
public class Evalua_edad {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.print("Introduce tu edad por favor: ");
		
		int edad = entrada.nextInt();
		
		if (edad <18) {
			System.out.println("Eres un adolescente");
		} 
		
		else if(edad < 40)
		{
			System.out.println("Eres Joven");			
		}
		
		else if(edad < 65)
		{
			System.out.println("Eres Maduro");			
		}		
		
		else
		{
			System.out.println("Cuidate");
		}

	}

}
