package graficos;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;

public class Barra_Herramientas {

    public static void main(String[] args) {

        Marco_Barra mimarco = new Marco_Barra();
        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mimarco.setVisible(true);
        }
    }

    class Marco_Barra extends JFrame{
        public Marco_Barra(){
            setTitle("Marco con Barra");
            setBounds(500,300,600,450);
            lamina = new JPanel();
            add(lamina);

            Action accionAzul= new AccionColor("Azul", new ImageIcon("src/graficos/imagenes/bola_azul.jpg"), Color.BLUE);
            Action accionAmarillo= new AccionColor("Amarillo", new ImageIcon("src/graficos/imagenes/bola_amarilla.jpg"), Color.YELLOW);
            Action accionRojo= new AccionColor("Rojo", new ImageIcon("src/graficos/imagenes/bola_roja.jpg"), Color.RED);
            Action accionSalir = new AbstractAction("salir", new ImageIcon("src/graficos/imagenes/salir.jpg")){

                @Override
                public void actionPerformed(ActionEvent e) {
                    System.exit(0);
                }
            };

            JMenu menu = new JMenu("Color");
            menu.add(accionAzul);
            menu.add(accionAmarillo);
            menu.add(accionRojo);


            JMenuBar barra_menus = new JMenuBar();

            barra_menus.add(menu);

            setJMenuBar(barra_menus);

            JToolBar barra = new JToolBar();

            barra.add(accionAzul);
            barra.add(accionAmarillo);
            barra.add(accionRojo);
            barra.addSeparator();
            barra.add(accionSalir);
            add(barra, BorderLayout.NORTH);

        }

    private class AccionColor extends AbstractAction{

        public AccionColor(String nombre,Icon icono, Color c){
            putValue(Action.NAME, nombre);
            putValue(Action.SMALL_ICON, icono);
            putValue(Action.SHORT_DESCRIPTION, "Color de fondo..." + nombre);
            putValue("Color", c);
        }

        @Override
        public void actionPerformed(ActionEvent arg0){
            Color c = (Color) getValue("Color");
            lamina.setBackground(c);
        }

    }
    private JPanel lamina;

}
