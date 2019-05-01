package poo;

public class Furgoneta extends Coche{
	
	private int capacidad_carga;
	private int plazas_extra;
	
	public Furgoneta(int plazas_extra, int capacidad_carga) {
		
		super(); // Llamar al constructor de la clase padre
		
		this.capacidad_carga = capacidad_carga;
		this.plazas_extra = plazas_extra;
	}
	
	public String dimeDatosFurgoneta() {
		return "Capacidad de carga es: " + capacidad_carga +
			   "\nLas plazas son: " + plazas_extra;
	}
}
