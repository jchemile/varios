package introspeccion;

public class UsoEmpleado {
    public static void main(String[] args) {

        Persona antonio = new Persona("Antonio");

        System.out.println(antonio.getNombre());

        Empleado ana = new Empleado("Ana", 35000);

        System.out.println(ana.getNombre());

        System.out.println(ana.getSalario());

        //---------------------------------------//

        //System.out.println(antonio.getClass().getName());

        //Class cl1 = antonio.getClass();

        //System.out.println(cl1.getClass());

        String nombreClase = "introspeccion.Empleado";

        try {
            Class cl1 = Class.forName(nombreClase);
            System.out.println(cl1.getName());
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}

class Persona{
    public Persona(String nombre){
        this.nombre=nombre;
    }

    public String getNombre(){
        return nombre;
    }

    private String nombre;
}

class Empleado extends Persona{

    public Empleado(String nombre, double salario) {
        super(nombre);

        this.salario = salario;
    }

    public void setIncentivo(double incentivo){
        salario = salario+incentivo;
    }

    public String getSalario(){
        return "El salario es: " + salario;
    }

    private double salario;
}