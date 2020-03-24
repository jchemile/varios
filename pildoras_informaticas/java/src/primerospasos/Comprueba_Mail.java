package primerospasos;

import graficos.Barra_Herramientas;

import javax.swing.JOptionPane;
import java.io.EOFException;

public class Comprueba_Mail {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String mail = JOptionPane.showInputDialog("Introduce mail");


        //examina_mail(mail);

		try {
			examina_mail(mail);
		} catch (Exception e){
			System.out.println("La direccion de email no es correcta");
			e.printStackTrace();
		}

	}

	static void examina_mail(String mail) throws Longitud_mail_erronea{

		int arroba = 0;
		boolean punto = false;

		if(mail.length()<= 3){

		    throw new Longitud_mail_erronea("Mail corto");
			//throw new EOFException();

		} else {
			for(int i = 0; i<mail.length();i++){

				if(mail.charAt(i)=='@') {
					arroba++;
				}

				if(mail.charAt(i)=='.') {
					punto = true;
				}
			}
		}

		if(arroba == 1 && punto == true) {
			System.out.println("Correcto");
		} else {
			System.out.println("Incorrecto");
		}
	}

}

class Longitud_mail_erronea extends Exception{

    public Longitud_mail_erronea(){}

    public Longitud_mail_erronea(String msj_error){

        super(msj_error);

    }


}
