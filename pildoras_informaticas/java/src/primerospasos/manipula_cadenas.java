package primerospasos;

public class manipula_cadenas {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String nombre = "Joaquin";
		
		System.out.println("Mi nombre es: " + nombre);
		
		System.out.println("Mi nombre tiene: " + nombre.length() + " letras");
		
		System.out.println("La primera letra es: " + nombre.charAt(0));
		
		int ultima_letra = nombre.length();
		
		System.out.println("Y La ultima letra es la " + nombre.charAt(ultima_letra-1));


	}

}
