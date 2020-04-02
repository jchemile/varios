package programacion_generica;

import java.util.*;

public class UsoEmpleado {

    public static void main(String[] args) {
        /*
        Empleado listaEmpleados[] = new Empleado[3];
        listaEmpleados[0] = new Empleado("Ana", 45,2000);
        listaEmpleados[1] = new Empleado("Antonio", 45,2000);
        listaEmpleados[2] = new Empleado("Maria", 45,2000);
        */



        //ArrayList<Empleado> listaEmpleados = new ArrayList<Empleado>();

        //listaEmpleados.ensureCapacity(4);
        /*
        listaEmpleados.add(new Empleado("Ana", 45,2000));
        listaEmpleados.add(new Empleado("Antonio", 45,2000));
        listaEmpleados.add(new Empleado("Maria", 45,2000));
        listaEmpleados.add(new Empleado("Maria", 45,2000));
        listaEmpleados.set(1, new Empleado("Olga", 22,2000));
        //listaEmpleados.trimToSize();

        System.out.println(listaEmpleados.get(3).dameDatos());

        System.out.println(listaEmpleados.size());

/*
        for (Empleado e: listaEmpleados){
            System.out.println(e.dameDatos());
        }
*/
        //Iterator <Empleado> mi_iterador = listaEmpleados.iterator();

        /*for(int i = 0; i< listaEmpleados.size();i++){
            Empleado e = listaEmpleados.get(i);
            System.out.println(e.dameDatos());
        }

        while(mi_iterador.hasNext()){
            System.out.println(mi_iterador.next().dameDatos());
        }
        */


    }
}

class Empleado{

    public Empleado(String nombre, int edad, double salario){
        this.nombre = nombre;
        this.edad = edad;
        this.salario = salario;
    }

    public String dameDatos(){
        return "Nombre: " + nombre + " Edad: " + edad + " Salario: " + salario;
    }

    private String nombre;
    private int edad;
    private double salario;
}
