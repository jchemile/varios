package basededatos.worldApp.principal;

import basededatos.worldApp.vista.Marco_Aplicacion_World;

import javax.swing.*;

public class EjecutaMVC {
    public static void main(String[] args) {
        Marco_Aplicacion_World mimarco = new Marco_Aplicacion_World();
        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mimarco.setVisible(true);
    }
}
