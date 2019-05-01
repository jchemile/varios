import javax.swing.JOptionPane;

import sun.security.util.Length;

public class Comprueba_Mail {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int arroba = 0;
		boolean punto = false;
		
		String mail = JOptionPane.showInputDialog("Introduce mail");
		
		for(int i = 0; i<mail.length();i++){
			
			if(mail.charAt(i)=='@') {
				arroba++;
			}
			
			if(mail.charAt(i)=='.') {
				punto = true;
			}
		}
		
		
		if(arroba == 1 && punto == true) {
			System.out.println("Correcto");
		} else {
			System.out.println("Incorrecto");
		}
		
	}

}
