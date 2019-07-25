package graficos;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class PruebaArea {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MarcoPruebaArea mimarco = new MarcoPruebaArea();
		mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		mimarco.setVisible(true);
	}

}

class MarcoPruebaArea extends JFrame{
	
	public MarcoPruebaArea() {
		setTitle("Probando Area de texto");
		setBounds(500,300,500,350);
		setLayout(new BorderLayout());
		
		laminaBotones = new JPanel();
		botonInsertar = new JButton("Insertar");
		botonInsertar.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				
				areaTexto.append("En un lugar de la mancha de cuyo nombre nombre no quier acordarme");
				
			}
			
		});
		
		laminaBotones.add(botonInsertar);
		botonSaltoLinea = new JButton("Salto L�nea");
		
		botonSaltoLinea.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				
				boolean saltar =! areaTexto.getLineWrap();
				
				areaTexto.setLineWrap(saltar);
				
				if(saltar) {
					botonSaltoLinea.setText("Quitar Salto");
				} else {
					botonSaltoLinea.setText("Salto L�nea");
				}
				
			}
			
		});
		
		laminaBotones.add(botonSaltoLinea);
		add(laminaBotones, BorderLayout.SOUTH);
		areaTexto = new JTextArea(8,20);
		laminaConBarras = new JScrollPane(areaTexto);
		add(laminaConBarras, BorderLayout.CENTER);
	}
	
	private JPanel laminaBotones;
	private JButton botonInsertar;
	private JButton botonSaltoLinea;
	private JTextArea areaTexto;
	private JScrollPane laminaConBarras;
	
	
}
