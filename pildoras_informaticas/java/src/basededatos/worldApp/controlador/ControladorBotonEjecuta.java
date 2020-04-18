package basededatos.worldApp.controlador;

import basededatos.worldApp.modelo.EjecutaConsultas;
import basededatos.worldApp.vista.Marco_Aplicacion_World;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.ResultSet;

public class ControladorBotonEjecuta implements ActionListener {

    public ControladorBotonEjecuta(Marco_Aplicacion_World elmarco){

        this.elmarco= elmarco;

    }

    @Override
    public void actionPerformed(ActionEvent e) {

        String seleccionContinente = (String)elmarco.continente.getSelectedItem();
        String seleccionRegion = (String)elmarco.region.getSelectedItem();

        resultadoConsulta = obj.filtraBBDD(seleccionContinente,seleccionRegion);

        try{

            elmarco.resultado.setText("");
            while(resultadoConsulta.next()){

                elmarco.resultado.append(resultadoConsulta.getString(1));
                elmarco.resultado.append(", ");
                elmarco.resultado.append(resultadoConsulta.getString(2));
                elmarco.resultado.append(", ");
                elmarco.resultado.append(resultadoConsulta.getString(3));
                elmarco.resultado.append(", ");
                elmarco.resultado.append(resultadoConsulta.getString(4));
                elmarco.resultado.append("\n");

            }

        } catch (Exception e2){

        }


    }

    private Marco_Aplicacion_World elmarco;

    EjecutaConsultas obj = new EjecutaConsultas();

    private ResultSet resultadoConsulta;
}
