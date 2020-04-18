package basededatos.procedimientosalmacenados;

import org.w3c.dom.ls.LSOutput;

import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;

public class ConsultaPaises {

    public static void main(String[] args) {

        try{

            Connection miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

            CallableStatement miSentencia = miConexion.prepareCall("{call MUESTRA_PAISES()}");

            ResultSet rs = miSentencia.executeQuery();

            while (rs.next()){
                System.out.println(rs.getString("Code") +
                                   ", " +
                                   rs.getString("Name") +
                                   ", " +
                                   rs.getString("Continent") +
                                   ", " +
                                   rs.getString("Region") );
            }

            rs.close();

        } catch (Exception e){

        }




    }

}
