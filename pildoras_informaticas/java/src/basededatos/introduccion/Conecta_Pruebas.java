package basededatos.introduccion;

import java.sql.*;

public class Conecta_Pruebas{

    public static void main(String[] args) {
        try{

            //1 - Creo conexion.
            Connection miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

            //2 - Creo Objeto Statement
            Statement miStatement = miConexion.createStatement();

            //Ejecuto SQL que me devuelve la consulta
            ResultSet miResulset = miStatement.executeQuery("SELECT * FROM city");

            //Recorrer el resulset (El Cursor)

            while (miResulset.next()){
                System.out.println(miResulset.getString("ID")   + " " +
                                   miResulset.getString("Name") + " " +
                                   miResulset.getString("Population"));
            }


        } catch (Exception e){
            //System.out.println("Fallo");
            e.printStackTrace();
        }
    }
}
