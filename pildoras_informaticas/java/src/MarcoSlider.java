import javax.swing.*;

public class MarcoSlider {
	
	public static void mail(String args[]) {
		
		Frame_Sliders mimarco = new Frame_Sliders();
		mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
	}

}

class Frame_Sliders extends JFrame{
	public Frame_Sliders() {
		setBounds(550,400,550,350);
		Lamina_Sliders milamina = new Lamina_Sliders();
		add(milamina);
		setVisible(true);
	}
}

class Lamina_Sliders extends JPanel{
	public Lamina_Sliders() {
		
	}
}
