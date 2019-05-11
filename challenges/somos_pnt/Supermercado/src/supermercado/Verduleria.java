package supermercado;

public class Verduleria extends Producto{

	public Verduleria(String nombre, String unidad, int precio) {
		super(nombre,unidad,precio);
	}
	
	//Sobreescritura del metodo toString
	public String toString(String nombre, String unidad, int precio) {
		String cadena;
		
		cadena = "Nombre: "  + nombre  + " /// "+ 
				 "Precio: $" + precio + " /// " +
		         "Unidad de venta: " + unidad.toLowerCase();
		
		return cadena;
	}

}
