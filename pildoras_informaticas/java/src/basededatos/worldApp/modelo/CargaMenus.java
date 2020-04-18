package basededatos.worldApp.modelo;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;

public class CargaMenus {

    public CargaMenus(){
        miConexion = new Conexion();
    }

   public String ejecutaConsultas(){
        Paises miPais = null;
        Connection accessoBBDD = miConexion.dameConexion();

        try{

            Statement continentes = accessoBBDD.createStatement();
            Statement regiones = accessoBBDD.createStatement();


            rs  = continentes.executeQuery( "SELECT DISTINCT(Continent) FROM country");
            rs2 = regiones.executeQuery( "SELECT DISTINCT(Region) FROM country");

           // while(rs.next()){

                rs.previous();

                miPais = new Paises();
                miPais.setCountryContinent(rs.getString(1));
                miPais.setCountryRegion(rs2.getString(1));

                //return miPais.getCountryName();
           // }

            rs.close();
            rs2.close();
            accessoBBDD.close();

        }catch (Exception e){

        }

        return miPais.getCountryName();
    }

    /*public ResultSet ejecutaConsultas(){

        Connection accesoBBDD = miConexion.dameConexion();
        try {
            Statement continentes = accesoBBDD.createStatement();
            return rs = continentes.executeQuery("SELECT DISTINCT(Continent) FROM country");
        } catch (Exception e){

        }
        return null;
    }*/


    Conexion miConexion;
    public ResultSet rs;
    public ResultSet rs2;

}
