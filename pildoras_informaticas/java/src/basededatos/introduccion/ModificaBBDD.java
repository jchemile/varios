package basededatos.introduccion;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class ModificaBBDD {

    public static void main(String[] args) {
        try{

            //1 - Creo conexion.
            Connection miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

            //2 - Creo Objeto Statement
            Statement miStatement = miConexion.createStatement();

            //
            //String instruccionSql = "INSERT INTO country(Code, name) VALUES('AAF','TuVieja')";

            String instruccionSql = "DELETE country SET Region = 'chupala' WHERE Code = 'AAF'";

            miStatement.executeUpdate(instruccionSql);

            System.out.println("Datos Insertados Correctamente");

            /*
            //Ejecuto SQL que me devuelve la consulta
            ResultSet miResulset = miStatement.executeQuery("SELECT * FROM city");

            //Recorrer el resulset (El Cursor)

            while (miResulset.next()){
                System.out.println(miResulset.getString("ID")   + " " +
                        miResulset.getString("Name") + " " +
                        miResulset.getString("Population"));
            }
             */


        } catch (Exception e){
            //System.out.println("Fallo");
            e.printStackTrace();
        }
    }
}



