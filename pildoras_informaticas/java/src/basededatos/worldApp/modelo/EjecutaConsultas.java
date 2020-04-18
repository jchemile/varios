package basededatos.worldApp.modelo;

import java.sql.*;

public class EjecutaConsultas {

    public EjecutaConsultas(){

        miconexion = new Conexion();
    }

    public ResultSet filtraBBDD(String continente, String region) {

        //pruebas = "";
        Connection conecta = miconexion.dameConexion();
        rs = null;

        try{

            if (!continente.equals("Todos") && region.equals("Todos")) {

                enviaConsultaContinente = conecta.prepareStatement(consultaContinente);
                enviaConsultaContinente.setString(1,continente);
                rs = enviaConsultaContinente.executeQuery();

            } else if (continente.equals("Todos") && !region.equals("Todos")) {

                enviaConsultaRegion = conecta.prepareStatement(consultaRegion);
                enviaConsultaRegion.setString(1,region);
                rs = enviaConsultaRegion.executeQuery();


            } else {

                enviaConsultaTodos= conecta.prepareStatement(consultaTodos);

                enviaConsultaTodos.setString(1,continente);
                enviaConsultaTodos.setString(2,region);

                rs = enviaConsultaTodos.executeQuery();

            }

        } catch (Exception e){}


        return rs;

    }

    //private String pruebas;
    private Conexion miconexion;
    private ResultSet rs;

    private PreparedStatement enviaConsultaContinente;
    private final String consultaContinente = "SELECT code, name, continent, region FROM country WHERE continent = ?";

    private PreparedStatement enviaConsultaRegion;
    private final String consultaRegion = "SELECT code, name, continent, region FROM country WHERE region = ?";

    private PreparedStatement enviaConsultaTodos;
    private final String consultaTodos = "SELECT code, name, continent, region FROM country WHERE continent = ? AND region = ?";



}
