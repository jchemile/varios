import java.util.*;

public class Adivina_Numero {
	
	public static void main(String[] args) {
		
		int aleatorio = (int)(Math.random()*100);
		
		Scanner entrada =new Scanner(System.in);
		
		int numero = 0;
		int intentos = 0;
		
		do {
			intentos++;
			
			System.out.print("Introduce un n�mero: ");
			numero = entrada.nextInt();
			
			if(aleatorio < numero) {
				System.out.println("El n�mero generado es m�s Bajo");
			} 				
			
			else if(aleatorio > numero) {
				System.out.println("El n�mero generado es m�s alto");
			}
		} while(numero != aleatorio);
		System.out.println("Correcto" + ". Intentos: " + intentos);
		
		
	}

}
