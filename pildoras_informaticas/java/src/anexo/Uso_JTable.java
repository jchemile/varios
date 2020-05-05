package anexo;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Uso_JTable {

    public static void main(String[] args) {
        JFrame mimarco = new MarcoTabla();

        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mimarco.setVisible(true);


    }

}

class MarcoTabla extends JFrame {
    public MarcoTabla(){
        setTitle("Los Planetas");

        setBounds(300,300,400,200);

        JTable tablaPlanetas = new JTable(datosFila, nombreColumnas);

        add(new JScrollPane(tablaPlanetas), BorderLayout.CENTER);

        JButton botonImprimir = new JButton("Imprimir Tabla");

        botonImprimir.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {

                    tablaPlanetas.print();

                } catch (Exception e2){
                    e2.printStackTrace();
                }
            }
        });

        JPanel laminaBoton = new JPanel();

        laminaBoton.add(botonImprimir);

        add(laminaBoton, BorderLayout.SOUTH);
    }

    private String [] nombreColumnas = {"Nombre", "Radio", "Lunas", "Gaseoso"};

    private Object [][] datosFila = {
            {"Mercurio", 2440.0, 0,  false},
            {"Venus",    2440.0, 0,  false},
            {"Tierra",   2440.0, 1,  false},
            {"Marte",    2440.0, 2,  false},
            {"Jupyter",  2440.0, 16, true},
            {"Saturno",  2440.0, 18, true},
            {"Urano",    2440.0, 17, true},
            {"Neptuno",  2440.0, 8,  true},
            {"Plutón",   2440.0, 1,  false},
    };
}
