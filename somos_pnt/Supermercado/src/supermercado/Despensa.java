package supermercado;

public class Despensa extends Producto {	
	
	public Despensa(String nombre, String unidad, int precio) {
		super(nombre, unidad, precio);
	}
	
	//Sobrecarga del método constructor
	public Despensa(String nombre, double unidad, int precio) {
		super(nombre, unidad, precio);
	}
	
	//Sobreescritura del metodo toString
	public String toString(String nombre, String unidad, int precio) {
		
		/*
		Convierto primero a Double y Después a Int porque al recibir
		por argument un string la parte decimal no se puede convertir
		directamente a un entero. 
		*/
		int unidadImprimir = (int) Double.parseDouble(unidad);
		
		String cadena;
		
		cadena = "Nombre: "  + nombre  + " /// "+ 
		         "Contenido: " + unidadImprimir + "ml /// " +
				 " Precio: $" + precio;
		
		return cadena;
	}


}
