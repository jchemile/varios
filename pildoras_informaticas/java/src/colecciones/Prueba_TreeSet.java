package colecciones;

import com.sun.source.tree.Tree;
import com.sun.source.util.Trees;

import java.util.Comparator;
import java.util.TreeSet;

public class Prueba_TreeSet {
    public static void main(String[] args) {

/*        TreeSet<String> ordenaPersona = new TreeSet<String>();

        ordenaPersona.add("Sandra");
        ordenaPersona.add("Amanda");
        ordenaPersona.add("Diana");

        for(String persona: ordenaPersona){
            System.out.println(persona);
        }*/
        Articulo primero = new Articulo(1, "Art 1");
        Articulo segundo = new Articulo(2, "Art 2");
        Articulo tercero = new Articulo(3, "Art 3");
        Articulo cuarto = new Articulo(4, "Art 4");

        TreeSet<Articulo> ordenArticulos = new TreeSet<Articulo>();

        ordenArticulos.add(cuarto);
        ordenArticulos.add(segundo);
        ordenArticulos.add(primero);
        ordenArticulos.add(tercero);

        for(Articulo art : ordenArticulos){
            System.out.println(art.getDescripcion());
        }

        System.out.println("****************************");

        ComparadorArticulos compara_art = new ComparadorArticulos();

        TreeSet<Articulo> ordenaArticulos2 = new TreeSet<Articulo>(compara_art);

        ordenaArticulos2.add(cuarto);
        ordenaArticulos2.add(segundo);
        ordenaArticulos2.add(primero);
        ordenaArticulos2.add(tercero);

        for(Articulo art: ordenaArticulos2){
            System.out.println(art.getDescripcion());
        }

    }

}

class Articulo implements Comparable<Articulo>{

    public Articulo(int num, String desc){
        numero_articulo = num;
        descripcion = desc;
    }

    @Override
    public int compareTo(Articulo o) {
        return numero_articulo - o.numero_articulo;
    }

    public String getDescripcion(){
        return descripcion;
    }
    private int numero_articulo;
    private String descripcion;
}

class ComparadorArticulos implements Comparator<Articulo>{

    @Override
    public int compare(Articulo o1, Articulo o2) {

        String desc1 = o1.getDescripcion();
        String desc2 = o2.getDescripcion();

        return desc1.compareTo(desc2);
    }
}