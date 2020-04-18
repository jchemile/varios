package basededatos.introduccion;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;

public class Aplicacion_Consulta {

    public static void main(String[] args) {

        JFrame mimarco = new Marco_Aplicacion();
        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mimarco.setVisible(true);

    }
}

class Marco_Aplicacion extends JFrame{

    public Marco_Aplicacion(){
        setTitle("Consulta DDBB");
        setBounds(500,300,400,400);
        setLayout(new BorderLayout());
        JPanel menus = new JPanel();
        menus.setLayout(new FlowLayout());

        continente = new JComboBox();
        continente.setEditable(false);
        continente.addItem("Todos");

        region = new JComboBox();
        region.setEditable(false);
        region.addItem("Todos");

        resultado = new JTextArea(4,50);
        resultado.setEditable(false);
        add(resultado);

        menus.add(continente);
        menus.add(region);

        add(menus, BorderLayout.NORTH);
        add(resultado, BorderLayout.CENTER);
        JButton botonConsulta = new JButton("Consulta");

        botonConsulta.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                ejecutaConsulta();
            }
        });

        add(botonConsulta, BorderLayout.SOUTH);




        //Conexion
        try{
            //1 - Creo conexion.
            miConexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/world","world","world");

            Statement sentencia =  miConexion.createStatement();

            //Continentes
            String consulta = "SELECT DISTINCT(Continent) FROM country";

            ResultSet rs = sentencia.executeQuery(consulta);

            while (rs.next()) {
                continente.addItem(rs.getString("Continent"));
            }
            rs.close();

            //Paiese
            consulta = "SELECT DISTINCT(Region) FROM country";

            rs = sentencia.executeQuery(consulta);

            while (rs.next()) {
                region.addItem(rs.getString("Region"));
            }
            rs.close();

        } catch (Exception e){
            //System.out.println("Fallo");
            e.printStackTrace();
        }
    }


    private void ejecutaConsulta(){
        ResultSet rs = null;

        try{

            resultado.setText("");

            String continent = (String) continente.getSelectedItem();
            String region = (String) this.region.getSelectedItem();

            if(!continent.equals("Todos") && region.equals("Todos")){

                enviaConsultaContinente= miConexion.prepareStatement(consultaContinente);

                enviaConsultaContinente.setString(1,continent);

                rs = enviaConsultaContinente.executeQuery();

            } else if (continent.equals("Todos") && !region.equals("Todos")){

                enviaConsultaRegion= miConexion.prepareStatement(consultaRegion);

                enviaConsultaRegion.setString(1,region);

                rs = enviaConsultaRegion.executeQuery();

            } else if (!continent.equals("Todos") && !region.equals("Todos")){

                enviaConsultaTodos= miConexion.prepareStatement(consultaTodos);

                enviaConsultaTodos.setString(1,continent);
                enviaConsultaTodos.setString(2,region);

                rs = enviaConsultaTodos.executeQuery();

            }


            while (rs.next()){
                resultado.append(rs.getString("code"));
                resultado.append(", ");
                resultado.append(rs.getString("name"));
                resultado.append(", ");
                resultado.append(rs.getString("continent"));
                resultado.append(", ");
                resultado.append(rs.getString("region"));
                resultado.append(", ");
                resultado.append("\n");
            }

        } catch (Exception e){

        }


    }

    private Connection miConexion;

    private PreparedStatement enviaConsultaContinente;
    private final String consultaContinente ="SELECT code, name, continent, region FROM country WHERE continent = ?";

    private PreparedStatement enviaConsultaRegion;
    private final String consultaRegion = "SELECT code, name, continent, region FROM country WHERE region = ?";

    private PreparedStatement enviaConsultaTodos;
    private final String consultaTodos = "SELECT code, name, continent, region FROM country WHERE continent = ? AND region = ?";

    private JComboBox continente;
    private JComboBox region;

    private JTextArea resultado;

}