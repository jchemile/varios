package anexo;

import javax.swing.*;
import javax.swing.tree.DefaultMutableTreeNode;
import java.awt.*;

public class ArbolSencillo {

    public static void main(String[] args) {
        JFrame marco = new MarcoArbol();

        marco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        marco.setVisible(true);
    }

}

class MarcoArbol extends JFrame {

    public MarcoArbol(){
        setTitle("Arbol Sencillo");
        setBounds(350,300,600,600);
        DefaultMutableTreeNode mundo = new DefaultMutableTreeNode("Mundo");

        DefaultMutableTreeNode pais = new DefaultMutableTreeNode("España");

        mundo.add(pais);

        DefaultMutableTreeNode comunidad = new DefaultMutableTreeNode("Madrid");

        pais.add(comunidad);

        DefaultMutableTreeNode mostoles = new DefaultMutableTreeNode("Móstoles");

        comunidad.add(mostoles);

        DefaultMutableTreeNode alcobendas = new DefaultMutableTreeNode("Alcobendas");

        comunidad.add(alcobendas);

        comunidad = new DefaultMutableTreeNode("Cantabria");

        pais.add(comunidad);

        DefaultMutableTreeNode santillana = new DefaultMutableTreeNode("Santillana del mar");

        comunidad.add(santillana);

        pais = new DefaultMutableTreeNode("Alemania");

        mundo.add(pais);

        comunidad = new DefaultMutableTreeNode("Baviera");

        pais.add(comunidad);

        DefaultMutableTreeNode munich = new DefaultMutableTreeNode("Munich");

        comunidad.add(munich);

        JTree arbol = new JTree(mundo);

        //LaminaArbol milamina = new LaminaArbol(arbol);

        //add(milamina);

        Container laminaContenido = getContentPane();

        laminaContenido.add(new JScrollPane(arbol));

    }
}

/*class LaminaArbol extends JPanel{

    public LaminaArbol(JTree miarbol){
        setLayout(new BorderLayout());
        add(miarbol, BorderLayout.NORTH);
    }

}*/
