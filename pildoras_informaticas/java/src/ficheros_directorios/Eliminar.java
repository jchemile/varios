package ficheros_directorios;

import java.io.File;

public class Eliminar {

    public static void main(String[] args) {
        File ruta = new File("C:\\Users\\User\\Documents\\varios\\pildoras_informaticas\\java\\src");

        System.out.println(ruta.getAbsolutePath());

    }
}
