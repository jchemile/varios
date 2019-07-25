package poo;

public class Coche {
	
	// Se mantienen igual
	private int ruedas;
	private int largo;
	private int ancho;
	private int motor;
	private int peso_plataforma;
	
	// Pueden Variar
	private String color;
	private int peso_total;
	private boolean asientos_cuero;
	private boolean climatizador;
	
	// Constructuror: estado inicial del objeto
	public Coche() {
		ruedas = 4;
		largo = 2000;
		ancho = 300;
		motor = 1600;
		peso_plataforma = 500;
	}
	
	public String dime_datos_generales() { // Método Getter <- Nos informa el valor de la propiedad
		
		return "Datos de la plataforma" 
				+ "\nRuedas: " + ruedas
				+ "\nLargo: " + largo/1000
				+ "\nAncho: " + ancho
				+ "\nPeso: " + peso_plataforma;
	}
	
	public void establece_color(String color_coche) { // Método Setter <- Modifica valor de la propiedad
		
		color = color_coche;
		
	}
	
	public String dime_color() {
		
		return "El color del coche es: " + color;
	}
	
	public void configura_asientos(String asientos_cuero) {// SETTER
		
		if(asientos_cuero.equalsIgnoreCase("si")==true) {
			this.asientos_cuero = true;
		} else {
			this.asientos_cuero = false;
		}
		
	}
	
	public String dime_asientos() {//GETTER
		
		if(asientos_cuero == true) {
			return "El coche tiene asientos de cuero";
		} else {
			return "El coche no tiene asientos de serie";
		}
	}
	
	public void configura_climatizador(String climatizador) { //SETTER
		
		if(climatizador.equalsIgnoreCase("si")==true){
			this.climatizador = true;
		}else {
			this.climatizador = false;
		}
		
	}
	
	public String dime_climatizador() {//GETTER
		if(climatizador == true) {
			return "El coche incorpora climatizador";
		} else {
			return "El coche lleva aire acondicionado";
		}
	}
	
	public String dime_peso_coche(){//SETTER Y GETTER A LA VEZ
		
		int peso_carroceria=500;
		
		peso_total = peso_plataforma + peso_carroceria;
		
		if(asientos_cuero==true) {
			peso_total = peso_total +50;
		}
		if(climatizador==true) {
			peso_total = peso_total + 20;
		}
		
		return "El peso del coche es: " + peso_total;
		
	}
	
	public int precio_coche() {//GETTER
		int precio_final = 10000;
		
		if(asientos_cuero == true) {
			precio_final += 2000;
		}
		if(climatizador == true) {
			precio_final += 1500;
		}
		
		return precio_final;
	}

}
