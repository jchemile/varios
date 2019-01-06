package supermercado;

public class Bebida extends Producto {

	public Bebida(String nombre, String unidad, int precio) {
		super(nombre,unidad,precio);
	}
	
	//Sobrecarga del método constructor
	public Bebida(String nombre, double unidad, int precio) {
		super(nombre,unidad,precio);
	}
	
	//Sobreescritura del metodo toString
	public String toString(String nombre, String unidad, int precio) {
		String cadena;
		
		cadena = "Nombre: "  + nombre  + " /// "+ 
				 "Litros: " + unidad.toLowerCase()+ " /// " +
				 "Precio: $" + precio ;
		         
		
		return cadena;
	}	
	
}
