package basededatos.aplicacionFinal;

import javax.swing.*;
import javax.swing.border.Border;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.sql.*;
import java.util.ArrayList;

public class AplicacionUniversal {

    public static void main(String[] args) {

        MarcoDDBB mimarco = new MarcoDDBB();
        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mimarco.setVisible(true);

    }
}

class MarcoDDBB extends JFrame{

    public MarcoDDBB(){

        setBounds(300,300,700,700);

        LaminaBBDD milamina = new LaminaBBDD();

        add(milamina);

    }
}

class LaminaBBDD extends JPanel{
    public LaminaBBDD(){

        setLayout(new BorderLayout());

        comboTablas = new JComboBox();
        areaInformacion = new JTextArea();

        add(areaInformacion, BorderLayout.CENTER);

        comboTablas.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent arg0) {
                String nombreTabla = (String)comboTablas.getSelectedItem();

                mostrarInfoTabla(nombreTabla);
            }
        });

        add(comboTablas, BorderLayout.NORTH);

        conectarBBDD();
        obtenerTablas();


    }

    public void conectarBBDD(){

        miConexion = null;
        String datos[] = new String[3];

        try{

            entrada = new FileReader("src\\basededatos\\aplicacionFinal\\entrada.txt");

            BufferedReader mibuffer = new BufferedReader(entrada);

            for (int i = 0; i <= 2; i++){
                datos[i] = mibuffer.readLine();
            }

            miConexion = DriverManager.getConnection(datos[0],datos[1],datos[2]);
            entrada.close();


        } catch(IOException e){
            JOptionPane.showMessageDialog(this,"No existe o no se encuentra el archivo");
        }catch (Exception e2){
            e2.printStackTrace();
        }

    }

    public void obtenerTablas() {

        ResultSet miResulSet = null;

        try{

            DatabaseMetaData datosBBDD = miConexion.getMetaData();

            miResulSet = datosBBDD.getTables(null,null,null,null);

            while (miResulSet.next()){
                comboTablas.addItem(miResulSet.getString("TABLE_NAME"));
            }

        } catch (Exception e){

            e.printStackTrace();
        }

    }

    public void mostrarInfoTabla(String tabla){

        ArrayList<String> campos = new ArrayList<String>();

        String consulta = "SELECT * FROM " + tabla;

        try{

            areaInformacion.setText("");

            Statement miStatement = miConexion.createStatement();

            ResultSet miResulSet = miStatement.executeQuery(consulta);

            ResultSetMetaData rsBBDD = miResulSet.getMetaData();

            for(int i = 1; i<=rsBBDD.getColumnCount();i++){
                campos.add(rsBBDD.getColumnLabel(i));
            }

            while (miResulSet.next()){

                for (String nombreCampo:campos){
                    areaInformacion.append(miResulSet.getString(nombreCampo) + " ");
                }

                areaInformacion.append("\n");

            }



        } catch (Exception e){
            e.printStackTrace();
        }

    }

    private JComboBox  comboTablas;
    private JTextArea  areaInformacion;
    private Connection miConexion;
    private FileReader entrada;
}
