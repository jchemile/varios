package graficos;

import javax.swing.*;
import java.awt.*;

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

        setLayout(new EnColumnas());

        JLabel nombre   = new JLabel("Nombre: ");
        JTextField c_nombre   = new JTextField();

        JLabel apellido = new JLabel("Apellido: ");
        JTextField c_apellido = new JTextField();

        JLabel edad     = new JLabel("Edad: ");
        JTextField c_edad     = new JTextField();

        /*
        nombre.setBounds(20,20,80,10);

        c_nombre.setBounds(100,20,100,20);

        apellido.setBounds(20,60,80,10);

        c_apellido.setBounds(100,55,100,20);
         */
        add(nombre);
        add(c_nombre);

        add(apellido);
        add(c_apellido);

        add(edad);
        add(c_edad);
    }
}

class EnColumnas implements LayoutManager {

    @Override
    public void addLayoutComponent(String name, Component comp) {

    }

    @Override
    public void removeLayoutComponent(Component comp) {

    }

    @Override
    public Dimension preferredLayoutSize(Container parent) {
        return null;
    }

    @Override
    public Dimension minimumLayoutSize(Container parent) {
        return null;
    }

    @Override
    public void layoutContainer(Container micontenedor) {

        int d = micontenedor.getWidth();

        x  = d/2;

        int contador = 0;

        int n = micontenedor.getComponentCount();

        for(int i = 0; i < n;i++){
            contador++;

            Component c = micontenedor.getComponent(i);

            c.setBounds(x,y,100,20);

            x += 100;

            if(contador%2 == 0){
                x  = d/2;
                y += 40;
            }
        }
    }

    private int x;
    private int y = 20;
}