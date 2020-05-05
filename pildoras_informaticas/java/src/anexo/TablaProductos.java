package anexo;

import javax.swing.*;
import javax.swing.table.AbstractTableModel;
import javax.swing.table.TableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;

public class TablaProductos {
    public static void main(String[] args) {
        JFrame mimarco = new MarcoProductos();

        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        mimarco.setVisible(true);
    }
}

class MarcoProductos extends JFrame{

    public MarcoProductos(){
        setTitle("Productos");
        setBounds(500,300,800,400);

        JPanel superior = new JPanel();

        nombresDeTablas = new JComboBox();

        try{

            miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/World","world", "world");

            datosBaseDatos = miConexion.getMetaData();

            rs = datosBaseDatos.getTables(null,null,null,null);

            while (rs.next()){

                nombresDeTablas.addItem(rs.getString("TABLE_NAME"));

            }

        } catch (Exception e){
            e.printStackTrace();
        }

        nombresDeTablas.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String tablaseleccionada=(String)nombresDeTablas.getSelectedItem();

                String consulta = "SELECT * FROM " + tablaseleccionada;

                try{
                    sentencia = miConexion.createStatement();

                    rs = sentencia.executeQuery(consulta);

                    modelo = new ResultSetModeloTabla(rs);

                    JTable tabla = new JTable(modelo);

                    add(new JScrollPane(tabla), BorderLayout.CENTER);

                    validate();

                } catch (Exception e2){
                    e2.printStackTrace();
                }
            }
        });

        superior.add(nombresDeTablas);

        add(superior, BorderLayout.NORTH);
    }

    private JComboBox nombresDeTablas;
    private DatabaseMetaData datosBaseDatos;
    private ResultSet rs;
    private Connection miConexion;
    private Statement sentencia;
    private ResultSetModeloTabla modelo;

}

class ResultSetModeloTabla extends AbstractTableModel {

    public ResultSetModeloTabla(ResultSet unResultset){
        rsRegistro = unResultset;
        try {
            resmd = rsRegistro.getMetaData();
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
    }

    @Override
    public int getRowCount() {
        try {
            rsRegistro.last();
            return rsRegistro.getRow();
        } catch (SQLException throwables) {
            throwables.printStackTrace();

            return 0;
        }



    }

    @Override
    public int getColumnCount() {
        try {
            return resmd.getColumnCount();
        } catch (SQLException throwables) {
            throwables.printStackTrace();
            return 0;
        }

    }

    @Override
    public Object getValueAt(int rowIndex, int columnIndex) {
        try{
            rsRegistro.absolute(rowIndex+1);

            return rsRegistro.getObject(columnIndex + 1);
        } catch (Exception e){
            e.printStackTrace();
            return null;
        }
    }
    public  String getColumnName(int c){
        try {
            return resmd.getColumnName(c+1);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
    private ResultSet rsRegistro;
    private ResultSetMetaData resmd;
}