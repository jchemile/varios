package graficos;

import java.awt.BorderLayout;
import java.awt.FlowLayout;

import javax.swing.*;

public class Layouts_Java {
	
	public static void main(String[] args) {
		Marco_Layout mimarco = new Marco_Layout();
		
		mimarco.setDefaultCloseOperation(mimarco.EXIT_ON_CLOSE);
		
		mimarco.setVisible(true);
	}

}

class Marco_Layout extends JFrame{
	
	public Marco_Layout() {
		setTitle("Prueba Acciones");
		setBounds(600,350,600,300);
		Panel_Layout lamina = new Panel_Layout();
		
		
		//FlowLayout dispocision = new FlowLayout(FlowLayout.LEFT);
		
		//lamina.setLayout(dispocision);
		
		Panel_Layout2 lamina2 = new Panel_Layout2();
			
		add(lamina, BorderLayout.NORTH);
		add(lamina2, BorderLayout.SOUTH);
	}
	
}

class Panel_Layout extends JPanel{
	
	public Panel_Layout() {
		setLayout(new FlowLayout(FlowLayout.LEFT));
		add(new JButton("Amarillo"),BorderLayout.NORTH);
		add(new JButton("Rojo"), BorderLayout.SOUTH);

	}
}

class Panel_Layout2 extends JPanel{
	
	public Panel_Layout2() {
		setLayout(new BorderLayout());
		add(new JButton("Azul"), BorderLayout.WEST);
		add(new JButton("Verde"),BorderLayout.EAST);
		add(new JButton("Negro"),BorderLayout.CENTER);
	}
}