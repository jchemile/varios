package supermercado;

import java.util.*;

public class Main {
	
	public static void main(String[] args) {
			
		//Método para cargar los productos
		ArrayList<Producto> productos = cargaProductos();
		//Método para recorrer el Array List de Prodcutos
		imprimirInformacion(productos);

	}
	
	public static ArrayList<Producto> cargaProductos() {
		
		Verduleria frutilla = new Verduleria("Frutilla", "Kilo", 64);
		Despensa shampoo = new Despensa("Shampoo Sedal", 500, 19);
		Bebida cocaCola = new Bebida("Coca-Cola", 1.5, 18);
		Bebida cocaColaZero = new Bebida("Coca-Cola Zero", 1.5, 20);
		
		ArrayList<Producto> productos = new ArrayList<Producto>();

		productos.add(cocaColaZero);
		productos.add(cocaCola);
		productos.add(shampoo);
		productos.add(frutilla);
		
		return productos;
	}
	
	public static void imprimirInformacion(ArrayList<Producto> arrayList){
		for(Producto p:arrayList){
			String pNombre = p.dameNombre();
			String pUnidad = p.dameUnidad();
			int pPrecio = p.damePrecio();
			String imprimible = p.toString(pNombre, pUnidad, pPrecio);
			
			System.out.println(imprimible);
		}
		System.out.println("=============================");
		System.out.println("Producto más caro: " + Collections.max(arrayList,null).dameNombre());
		System.out.println("Producto más barato: " +Collections.min(arrayList,null).dameNombre());
		
	}
	

}
