package basededatos.procedimientosalmacenados;

import javax.swing.*;
import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;

public class Actualiza_Paises {

    public static void main(String[] args) {

        String codigoPais = JOptionPane.showInputDialog("Introduzca Codigo");
        String nombrePais = JOptionPane.showInputDialog("Introduce nombre país");

        try{

            Connection miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

            CallableStatement miSentencia = miConexion.prepareCall("{call ACTUALIZA_COUNTRY(?,?)}");

            miSentencia.setString(1,codigoPais);
            miSentencia.setString(2,nombrePais);

            miSentencia.execute();

            System.out.println("OK");

        } catch (Exception e){
            e.printStackTrace();
        }


    }


}
