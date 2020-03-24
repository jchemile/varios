package acceso_ficheros;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Acceso_Fichero {

    public static void main(String[] args) throws IOException {

        Leer_Fichero accediendo = new Leer_Fichero();

        accediendo.lee();
    }

}

class Leer_Fichero{

    public void lee() throws IOException {

        try{
            entrada = new FileReader("src/acceso_ficheros/ejemplo.txt");

            BufferedReader mibuffer = new BufferedReader(entrada);

            String linea = "";

            while (linea != null){
                linea = mibuffer.readLine();

                System.out.println(linea);
            }
            //entrada.close();
        } catch (IOException e){
            System.out.println("No se encontro el archivo");
            // e.printStackTrace();
        } finally {
            entrada.close();
        }

    }
    FileReader entrada;

}
