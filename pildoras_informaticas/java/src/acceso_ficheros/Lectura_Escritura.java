package acceso_ficheros;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class Lectura_Escritura {
    public static void main(String[] args) {

        int contador = 0;
        int datos_entrada[] = new int[8724];

        try{

            FileInputStream archivo_lectura = new FileInputStream("src/acceso_ficheros/casa.jpg");

            boolean final_ar = false;

            while (!final_ar){
                int byte_entrada = archivo_lectura.read();

                if(byte_entrada!= -1)

                    datos_entrada[contador] = byte_entrada;

                else

                    final_ar = true;

                System.out.println(datos_entrada[contador]);
                contador++;
            }

            archivo_lectura.close();

        }catch (IOException e){
            System.out.println("Error al acceder a la imagen");
        }

        System.out.println(contador);

        crea_fichero(datos_entrada);
    }

    static void crea_fichero(int datos_nuevos_fichero[]){
        try {

            FileOutputStream fichero_nuevo = new FileOutputStream("src/acceso_ficheros/imagen_copia.jpg");

            for(int i = 0; i< datos_nuevos_fichero.length;i++){
                fichero_nuevo.write(datos_nuevos_fichero[i]);
            }

            fichero_nuevo.close();

        } catch (IOException e){
            System.out.println("Erro al crear el archivo");
        }
    }
}
