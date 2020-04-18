package basededatos.transacciones;

import javax.swing.*;
import java.nio.channels.ScatteringByteChannel;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class Transaccion_Productos {

    public static void main(String[] args) {

        Connection miConexion = null;

        try {
            miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/pruebas", "world", "world");

            miConexion.setAutoCommit(false);

            Statement miStatement = miConexion.createStatement();

            String instruccionSql_1 = "DELETE FROM PRODUCTOS WHERE paisdeorigen = 'italia'";

            String instruccionSql_2 = "DELETE FROM PRODUCTOS WHERE precio > 300";

            String instruccionSql_3 = "UPDATE PRODUCTOS PRODUCTOS SET precio = precio * 1.15";

            boolean ejecutar = ejecutar_transaccion();

            if(ejecutar){
                miStatement.executeUpdate(instruccionSql_1);
                miStatement.executeUpdate(instruccionSql_2);
                miStatement.executeUpdate(instruccionSql_3);
                miConexion.commit();
                System.out.println("Se Ejecuto la transaccion correctamente");
            } else {
                System.out.println("No se ejecuto la transaccion");
            }




        } catch (Exception e) {

            try {
                miConexion.rollback();
            } catch (SQLException throwables) {
                throwables.printStackTrace();
            }
            System.out.println("Error");

        }
    }

    static boolean ejecutar_transaccion(){
        String ejecucion = JOptionPane.showInputDialog("¿Ejecutamos transaccion? [Y/n]");

        if(ejecucion.equals("Y")){
            return true;
        } else{
            return false;
        }
    }
}