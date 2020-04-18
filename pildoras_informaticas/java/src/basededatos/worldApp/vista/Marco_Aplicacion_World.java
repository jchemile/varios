package basededatos.worldApp.vista;


import basededatos.worldApp.controlador.ControladorBotonEjecuta;
import basededatos.worldApp.controlador.ControladorCargaMenus;

import javax.swing.*;
import java.awt.*;


public class Marco_Aplicacion_World extends JFrame{

    public Marco_Aplicacion_World() {
        setTitle("Consulta DDBB");
        setBounds(500, 300, 400, 400);
        setLayout(new BorderLayout());
        JPanel menus = new JPanel();
        menus.setLayout(new FlowLayout());

        continente = new JComboBox();
        continente.setEditable(false);
        continente.addItem("Todos");

        region = new JComboBox();
        region.setEditable(false);
        region.addItem("Todos");

        resultado = new JTextArea(4, 50);
        resultado.setEditable(false);
        add(resultado);

        menus.add(continente);
        menus.add(region);

        add(menus, BorderLayout.NORTH);
        add(resultado, BorderLayout.CENTER);
        JButton botonConsulta = new JButton("Consulta");

        add(botonConsulta, BorderLayout.SOUTH);

        botonConsulta.addActionListener(new ControladorBotonEjecuta(this));

        addWindowListener(new ControladorCargaMenus(this));

    }

    public JComboBox continente;
    public JComboBox region;

    public JTextArea resultado;
}
