import javax.swing.*;

public class acceso_aplicacion {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		String clave = "Juan";
		
		String pass = "";
		
		while(clave.equals(pass)==false) {
			
			pass=JOptionPane.showInputDialog("Introduce la contrase�a, por favor");
			
			if(clave.equals(pass)==false) {
				
				System.out.println("Contrase�a incorrecta");
				
			}
		}
		
		System.out.println("Contrase�a correcta. Acceso Permitido");

	}

}
