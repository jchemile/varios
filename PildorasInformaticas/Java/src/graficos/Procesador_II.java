package graficos;

import javax.swing.*;
import java.awt.*;

public class Procesador_II {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MenuProcesador_II mimarco = new MenuProcesador_II();
		
		mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}


class MenuProcesador_II extends JFrame{
	
	public MenuProcesador_II() {
		
		setBounds(500,300,550,400);
		
		LaminaProcesador_II milamina = new LaminaProcesador_II();
		
		add(milamina);
		
		setVisible(true);
	}
}

class LaminaProcesador_II extends JPanel{
	public LaminaProcesador_II(){
		
		setLayout(new BorderLayout());
		
		JPanel laminamenu= new JPanel();
		
		JMenuBar mibarra = new JMenuBar();
		
		//------------------------------------------------
		JMenu fuente = new JMenu("Fuente");
		JMenu estilo = new JMenu("Estilo");
		JMenu tamagno = new JMenu("Tama�o");
		//------------------------------------------------
		JMenuItem arial = new JMenuItem("Arial");
		JMenuItem courier = new JMenuItem("Courier");
		JMenuItem verdana = new JMenuItem("Verdana");
			
		fuente.add(arial);
		fuente.add(courier);
		fuente.add(verdana);
		//------------------------------------------------
		JMenuItem negrita = new JMenuItem("Negrita");
		JMenuItem cursiva = new JMenuItem("Cursiva");
			
		estilo.add(negrita);
		estilo.add(cursiva);
		//------------------------------------------------
		JMenuItem tam_12 = new JMenuItem("12");
		JMenuItem tam_16 = new JMenuItem("16");
		JMenuItem tam_20 = new JMenuItem("20");
		JMenuItem tam_24 = new JMenuItem("24");
			
		tamagno.add(tam_12);
		tamagno.add(tam_16);
		tamagno.add(tam_20);
		tamagno.add(tam_24);
		//---------------------------------------------------
		
		mibarra.add(fuente);
		mibarra.add(estilo);
		mibarra.add(tamagno);
		
		laminamenu.add(mibarra);
		
		add(laminamenu,BorderLayout.NORTH);
		
	}
}