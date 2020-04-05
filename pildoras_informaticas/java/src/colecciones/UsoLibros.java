package colecciones;

public class UsoLibros {
    public static void main(String[] args) {
        Libro libro1 = new Libro("P en Java", "Juan", 25);
        Libro libro2 = new Libro("P en Java", "Juan", 25);

        if(libro1.equals(libro2)){
            System.out.println("Iguales");
        } else {
            System.out.println("No Iguales");
        }
    }
}
