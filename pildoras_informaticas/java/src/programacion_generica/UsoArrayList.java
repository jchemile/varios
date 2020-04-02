package programacion_generica;

public class UsoArrayList {

    public static void main(String[] args) {

        ArrayList archivos = new ArrayList(4);

        archivos.add("Juan");
        archivos.add("Maria");
        archivos.add("Ana");
        archivos.add("Sandra");

        String nombrePersona = (String)archivos.get(2);

        System.out.println(nombrePersona);


    }
}
