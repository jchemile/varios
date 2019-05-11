package supermercado;

public abstract class Producto implements Comparable{
	private String nombre;
	private String unidad_de_medida;
	private int precio;
	
	public Producto(String nombre, String unidad, int precio) {
		this.nombre = nombre;
		unidad_de_medida = unidad;
		this.precio = precio;
	}
	
	//Sobrecarga del método constructor
	public Producto(String nombre, double unidad, int precio) {
		this.nombre = nombre;
		unidad_de_medida = Double.toString(unidad);
		this.precio = precio;
	}
	
	
	
	public String dameNombre(){
		return nombre;
	}
	
	public String dameUnidad(){
		return unidad_de_medida;
	}
	
	public int damePrecio(){
		return precio;
	}
	
	public int compareTo(Object miObjeto) {
		
		Producto otroProducto = (Producto) miObjeto;
		
		
		if(this.precio<otroProducto.precio) {
			return -1;
		}
		
		if(this.precio>otroProducto.precio) {
			return 1;
		}
		
		return 0;
	}
	
	public abstract String toString(String nombre, String unidad, int precio);
		
}
