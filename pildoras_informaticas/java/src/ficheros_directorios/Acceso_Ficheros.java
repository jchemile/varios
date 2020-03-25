package ficheros_directorios;

import java.io.*;

public class Acceso_Ficheros {

    public static void main(String[] args) {

        File ruta = new File("C:\\Users\\User\\Documents\\varios\\pildoras_informaticas\\java\\src");

        System.out.println(ruta.getAbsolutePath());

        String[] nombres_archivos = ruta.list();

        for(int i = 0; i<nombres_archivos.length;i++){
            System.out.println(nombres_archivos[i]);
            File f = new File(ruta.getAbsolutePath(), nombres_archivos[i]);

            if (f.isDirectory()){
                String[] archivos_subcarepta = f.list();

                for(int j = 0; j < archivos_subcarepta.length;j++){
                    System.out.println(archivos_subcarepta[j]);
                }
            }
        }



    }
}
