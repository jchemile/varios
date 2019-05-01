package graficos;

import java.awt.*;
import javax.swing.*;
import javax.imageio.*;
import java.io.*;

public class PruebaImagen {

	public static void main(String[] args) {
		
		MarcoImagen mimarco = new MarcoImagen();
		mimarco.setVisible(true);
		mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
	}
}

class MarcoImagen extends JFrame{
	
	public MarcoImagen() {
		setTitle("Marco Con Imagen");
		setBounds(750,300,300,200);
		LaminaConImagen milamina = new LaminaConImagen();
		add(milamina);
	}
}

class LaminaConImagen extends JPanel{
	
	public LaminaConImagen() {
		try {
			imagen = ImageIO.read(new File("src/graficos/imagen.png"));
		}
		catch(IOException e) {
			System.out.print("La imagen no se encuentra");
		}		
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
			
		g.drawImage(imagen, 0, 0, null);
		
		int anchuraImagen=imagen.getWidth(this);
		int alturaImagen=imagen.getHeight(this);
		
		for(int i = 0; i< 300;i++){
			for(int j=0; j<200;j++)
			{
				g.copyArea(0, 0, anchuraImagen, alturaImagen, 15*i, 15*j);				
			}
		}
		
		
	}
	
	private Image imagen;
}
