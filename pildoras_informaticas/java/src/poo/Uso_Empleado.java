package poo;

import java.util.*;

public class Uso_Empleado {

	public static void main(String[] args) {
		
		Jefatura jefe_RRHH = new Jefatura("Juan", 55000, 2006, 9,25);
		jefe_RRHH.estableIncentivo(2570);
		
		Empleado [] misEmpleados = new Empleado[6];
		
		misEmpleados[0] = new Empleado("Paco G�mez", 85000, 1990,12,17);
		misEmpleados[1] = new Empleado("Ana L�pez", 95000, 1995,06,02);
		misEmpleados[2] = new Empleado("Mar�a Mart�n", 105000, 2002,03,15);
		misEmpleados[3] = new Empleado("Antonio Fernandez");
		misEmpleados[4] = jefe_RRHH;
		misEmpleados[5] = new Jefatura("Mar�a", 95000, 1999, 05,26);
		Jefatura jefa_Finanzas=(Jefatura) misEmpleados[5];
		jefa_Finanzas.estableIncentivo(55000);
			
		Empleado director_comercial = new Jefatura("Sandra", 85000, 2012,05,05);
		
		Comparable ejemplo = new Empleado("Elizabeth", 95000, 2011,06,07);
		
		System.out.println(jefa_Finanzas.tomar_decisiones("Dar m�s vacaciones"));
		
		System.out.println("El jefe: " + jefa_Finanzas.dameNombre()+ 
						   " Tendr� bonus de: " + jefa_Finanzas.establece_bonus(500));
		
		System.out.println(misEmpleados[3].dameNombre() + " Tiene un bonus de: " + misEmpleados[3].establece_bonus(200) );
				
		for(Empleado e:misEmpleados) {
			e.subeSueldo(5);
		}
		
		Arrays.sort(misEmpleados);//Lo ordena de menor a Mayor
		
		for(Empleado e:misEmpleados) {
			
			System.out.println("-----------------EMPLEADO-------------------------");
			System.out.println("Nombre: " + e.dameNombre() +
					   "\nSueldo: " + e.dameSueldo() +
					   "\nFecha de Alta: " + e.dameFechaContrato() +
					   "\nId: " + e.dameId());			
			System.out.println("-----------------FIN DE INFORMACION---------------\n");
		}
	}
	

}

class Empleado implements Comparable, Trabajadores{
	
	public Empleado(String nom, double sue, int agno, int mes, int dia) {
		
		nombre = nom;
		sueldo = sue;
		GregorianCalendar calendario = new GregorianCalendar(agno, mes-1, dia);
		altaContrato = calendario.getTime();
		
		++IdSiguiente;
		Id=IdSiguiente;
		
	}
	
	public double establece_bonus(double gratificacion) {
		
		return Trabajadores.bonus_base+gratificacion;
	}
	
	public Empleado(String nom) {
		
		this(nom, 30000, 2000,01,01);
		
	}
	
	public String dameNombre() {//GETTER
				
		return nombre;
	}
	
	public double dameSueldo() {//GETTER
		return sueldo;
	}
	
	public Date dameFechaContrato() {// GETTER
		return altaContrato;
	}
	
	public int dameId() {// GETTER
		return Id;
	}
	
	public void subeSueldo(double porcentaje) {//SETTER
		
		double aumento = sueldo * porcentaje/100;
		
		sueldo += aumento;
	}
		
	public int compareTo(Object miObjeto) {
		
		Empleado otroEmpleado = (Empleado) miObjeto;
		
		if(this.Id<otroEmpleado.Id) {
			return -1;
		}
		
		if(this.Id>otroEmpleado.Id) {
			return 1;
		}
		
		return 0;
		
	}
	
	private String nombre;
	private double sueldo;
	private Date altaContrato;
	private static int IdSiguiente;
	private int Id;
	
}

class Jefatura extends Empleado implements Jefes{
	
	public Jefatura(String nom, double sue, int agno, int mes, int dia) {
		
		super(nom, sue, agno, mes, dia);
		
	}
	
	public String tomar_decisiones(String decision) {
		
		return "Un miembro de la direcci�n ha tomado la decisi�n de: " + decision;
		
	}
	
	public double establece_bonus(double gratificacion) {
		double prima = 2000;
		
		return Trabajadores.bonus_base+gratificacion +prima;
	}
	
	public void estableIncentivo(double b) {
		incentivo = b;
	}
	
	
	public double dameSueldo() {
		double sueldoJefe = super.dameSueldo();
		return sueldoJefe + incentivo;
	}
	
	private double incentivo;
	
	
	
}

