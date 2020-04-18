package basededatos.metadatos;

import java.sql.*;

public class Info_Metadatos {
    public static void main(String[] args) {

        mostrarInfo_BBDD();
        System.out.println("***********************");
        mostrarInfo_Tablas();
    }

    static void mostrarInfo_BBDD(){

        Connection miConexion = null;

        try {
            miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

            DatabaseMetaData datosBBDD = miConexion.getMetaData();

            System.out.println("********************************");
            System.out.println("Gestor: " + datosBBDD.getDatabaseProductName());
            System.out.println("Version: " + datosBBDD.getDatabaseProductVersion());
            System.out.println("Driver: " + datosBBDD.getDriverName());
            System.out.println("Gestor: " + datosBBDD.getDriverVersion());

        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }


    }

    static void mostrarInfo_Tablas(){
        Connection miConexion = null;
        ResultSet rs = null;

        try {
            miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

            DatabaseMetaData datosBBDD = miConexion.getMetaData();

            System.out.println("Lista de Tablas: ");

            rs = datosBBDD.getTables(null,null,null,null);

            while (rs.next()){
                System.out.println(rs.getString("TABLE_NAME"));
            }

            System.out.println("Columnas: ");

            rs = datosBBDD.getColumns(null,null,"country",null);

            while (rs.next()){
                System.out.println(rs.getString("COLUMN_NAME"));
            }

        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }

    }
}
