package basededatos.worldApp.modelo;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class Conexion {

    Connection miConexion = null;

    public Conexion(){

    }

    public Connection dameConexion(){

        try{
            miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }

        return miConexion;

    }
}

