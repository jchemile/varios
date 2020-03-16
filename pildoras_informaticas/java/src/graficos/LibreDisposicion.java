package graficos;

import javax.swing.*;

public class LibreDisposicion {

    public static void main(String[] args) {

        MarcoLibre mimarco = new MarcoLibre();
        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}

class MarcoLibre extends JFrame {
    public MarcoLibre(){
        setBounds(450, 350,600,400);
        LaminaLibre milamina = new LaminaLibre();
        add(milamina);
        setVisible(true);
    }
}

class LaminaLibre extends JPanel{
    public LaminaLibre(){

        setLayout(null);

        JLabel nombre   = new JLabel("Nombre: ");
        JLabel apellido = new JLabel("Apellido: ");

        JTextField c_nombre = new JTextField();
        JTextField c_apellido = new JTextField();

        nombre.setBounds(20,20,80,10);

        c_nombre.setBounds(100,20,100,20);

        apellido.setBounds(20,60,80,10);

        c_apellido.setBounds(100,55,100,20);

        add(nombre);
        add(apellido);

        add(c_nombre);
        add(c_apellido);

    }
}