package introspeccion;

import java.io.File;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Scanner;

public class PruebaIntrospeccion {
    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        System.out.print("Introduce el nombre del a clase: ");

        String nombreClase;

        nombreClase = entrada.next();

        try{

            Class cl = Class.forName(nombreClase);
            Class superCl = cl.getSuperclass();

            System.out.print("Clase " + nombreClase);

            if (superCl!=null && superCl != Object.class){
                System.out.print(" extends " + superCl.getName());
            }

            System.out.println();

            imprimirConstructores(cl);

            System.out.println();

            imprimirMetodos(cl);

            System.out.println();

            imprimirCampos(cl);

        } catch (Exception e){
            e.printStackTrace();

            System.exit(0);

        }

    }

    public static void imprimirConstructores(Class cl){

        Constructor[] constructores = cl.getDeclaredConstructors();

        for (Constructor c: constructores){
            String nombre = c.getName();
            System.out.print(" " + Modifier.toString(c.getModifiers()));
            System.out.print(" " + nombre + "(");

            Class[] tipoParams = c.getParameterTypes();

            for(int i = 0; i<tipoParams.length;i++){
                if(i>0) System.out.print(",     ");

                System.out.println(tipoParams[i].getName());
            }

            System.out.print(");");
        }

    }

    public static void imprimirMetodos(Class cl){

        Method[] metodos = cl.getDeclaredMethods();

        for(Method n: metodos){
            Class tipoDevuelto = n.getReturnType();

            String nombre = n.getName();

            System.out.print("  " + Modifier.toString(n.getModifiers()));

            System.out.print("  " + tipoDevuelto.getName() + " " + nombre + "(");

            Class[] tiposParams = n.getParameterTypes();

            for(int i = 0; i<tiposParams.length;i++){
                if(i>0) System.out.print(", ");

                System.out.print(tiposParams[i].getName());
            }
            System.out.print(")");
        }
    }

    public static void imprimirCampos(Class cl){

        Field[] campos = cl.getDeclaredFields();

        for(Field f: campos){
            Class tipoCampo = f.getType();

            String nombre = f.getName();

            System.out.print("    " + Modifier.toString(f.getModifiers()));

            System.out.print("     "+ tipoCampo.getName() + "   " + nombre+ ";");
        }

    }
}
