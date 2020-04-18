package basededatos.worldApp.controlador;

import basededatos.worldApp.modelo.CargaMenus;
import basededatos.worldApp.vista.Marco_Aplicacion_World;

import java.awt.event.*;

public class ControladorCargaMenus extends WindowAdapter {

    public ControladorCargaMenus(Marco_Aplicacion_World elmarco){

        this.elmarco = elmarco;

    }

    public void windowOpened(WindowEvent e){

        obj.ejecutaConsultas();

        try{

            while (obj.rs.next()){
                elmarco.continente.addItem(obj.rs.getString(1));
            }

            while (obj.rs2.next()){
                elmarco.region.addItem(obj.rs2.getString(1));
            }

        } catch (Exception e2){
            e2.getStackTrace();
        }


    }

    CargaMenus obj = new CargaMenus();
    private Marco_Aplicacion_World elmarco;

}
