package anexo;

import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import java.awt.*;
import java.util.*;
import java.util.List;

public class PruebaLista {

    public static void main(String[] args) {

        JFrame mimarco = new MarcoDeLista();

        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        mimarco.setVisible(true);

    }
}

class MarcoDeLista extends JFrame {
    public MarcoDeLista(){
        setTitle("Prueba de lista");
        setBounds(400,300,400,300);

        String [] meses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio",
        "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};


        listaDeMeses = new JList<String>(meses);

        listaDeMeses.setVisibleRowCount(4);
        JScrollPane laminaDeDesplazamiento = new JScrollPane(listaDeMeses);

        laminaDeLista = new JPanel();

        listaDeMeses.addListSelectionListener(new ListSelectionListener() {
            @Override
            public void valueChanged(ListSelectionEvent e) {
                List<String> valores = listaDeMeses.getSelectedValuesList();

                StringBuilder texto = new StringBuilder("Mes Seleccionado: ");

                for (String elementos: valores){
                    String palabra=elementos;

                    texto.append(palabra);

                    texto.append(" ");
                }

                rotulo.setText(texto.toString());
            }
        });

        laminaDeTexto = new JPanel();
        laminaDeLista.add(laminaDeDesplazamiento);
        rotulo = new JLabel("Mes Seleccionado");

        laminaDeTexto.add(rotulo);

        add(laminaDeLista, BorderLayout.NORTH);
        add(laminaDeTexto, BorderLayout.SOUTH);

    }



    private JList<String> listaDeMeses;
    private JPanel laminaDeLista, laminaDeTexto;
    private JLabel rotulo;
}
