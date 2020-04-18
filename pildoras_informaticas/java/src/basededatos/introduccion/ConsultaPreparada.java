package basededatos.introduccion;

import java.sql.*;

public class ConsultaPreparada {

    public static void main(String[] args) {
        try{

            //1 - Creo conexion.
            Connection miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

            //2 - Preparo Consulta

            PreparedStatement miSentencia = miConexion.prepareStatement("SELECT Code, Name, Continent FROM COUNTRY WHERE Continent = ?");

            //3 - Establecer parametros de consulta

            miSentencia.setString(1,"South America");

            //4 - Ejecuto la sentencia

            ResultSet rs = miSentencia.executeQuery();

            while (rs.next()){
                System.out.println(rs.getString("Code") + " " + rs.getString("Name") + " " + rs.getString("Continent"));
            }

            rs.close();


        } catch (Exception e){
            //System.out.println("Fallo");
            e.printStackTrace();
        }
    }
}


