public class manipula_cadenas2{
	
	public static void main(String[] args){
		
		String frase ="Hoy es un estupendo d�a para aprender a programar en Java";
		
		String frase_resumen = frase.substring(0,28) + " irnos a la playa y olvidarnos de todo..." +
		frase.substring(29, 57);
		
		System.out.println(frase_resumen);
	}

}
