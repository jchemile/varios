package graficos;

import javax.swing.*;
import javax.swing.text.StyledEditorKit;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.InputEvent;
import java.awt.event.KeyEvent;

public class Procesador_II {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MenuProcesador_II mimarco = new MenuProcesador_II();
		
		mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}


class MenuProcesador_II extends JFrame{
	
	public MenuProcesador_II() {
		
		setBounds(250,250,550,450);
		
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
		fuente = new JMenu("Fuente");
		estilo = new JMenu("Estilo");
		tamagno = new JMenu("Tamaño");

		cofigura_menu("Arial", "fuente", "Arial",9,10);
		cofigura_menu("Courier", "fuente", "Courier",9,10);
		cofigura_menu("Verdana", "fuente", "Verdana",9,10);

		//------------------------------------------------

		cofigura_menu("Negrita", "estilo", "",Font.BOLD,1);
		cofigura_menu("Cursiva", "estilo", "",Font.ITALIC,1);

//		JCheckBoxMenuItem negrita =new JCheckBoxMenuItem("Negrita");
//		JCheckBoxMenuItem cursiva =new JCheckBoxMenuItem("Cursiva");
//
//		negrita.addActionListener( new StyledEditorKit.BoldAction());
//		cursiva.addActionListener( new StyledEditorKit.ItalicAction());
//
//		estilo.add(negrita);
//		estilo.add(cursiva);

		//-------------------------------------------------

		/*
		cofigura_menu("12", "tamaño", "",9,12);
		cofigura_menu("16", "tamaño", "",9,16);
		cofigura_menu("20", "tamaño", "",9,20);
		cofigura_menu("24", "tamaño", "",9,24);
		*/

		ButtonGroup tamagno_letra = new ButtonGroup();

		JRadioButtonMenuItem doce         = new JRadioButtonMenuItem("12");
		JRadioButtonMenuItem dieciseis    = new JRadioButtonMenuItem("16");
		JRadioButtonMenuItem veinte       = new JRadioButtonMenuItem("20");
		JRadioButtonMenuItem veinticuatro = new JRadioButtonMenuItem("24");

		tamagno_letra.add(doce);
		tamagno_letra.add(dieciseis);
		tamagno_letra.add(veinte);
		tamagno_letra.add(veinticuatro);

		doce.addActionListener(new StyledEditorKit.FontSizeAction("cambiar_tamaño", 12));
		dieciseis.addActionListener(new StyledEditorKit.FontSizeAction("cambiar_tamaño", 16));
		veinte.addActionListener(new StyledEditorKit.FontSizeAction("cambiar_tamaño", 20));
		veinticuatro.addActionListener(new StyledEditorKit.FontSizeAction("cambiar_tamaño", 24));

		//veinticuatro.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_D, InputEvent.CTRL_DOWN_MASK));

		tamagno.add(doce);
		tamagno.add(dieciseis);
		tamagno.add(veinte);
		tamagno.add(veinticuatro);

		mibarra.add(fuente);
		mibarra.add(estilo);
		mibarra.add(tamagno);
		
		laminamenu.add(mibarra);
		
		add(laminamenu,BorderLayout.NORTH);

		miarea = new JTextPane();
		add(miarea, BorderLayout.CENTER);

		JPopupMenu emergente = new JPopupMenu();
		JMenuItem negritaE =new JMenuItem("Negrita");
		JMenuItem cursivaE =new JMenuItem("Cursiva");

		negritaE.addActionListener( new StyledEditorKit.BoldAction());
		cursivaE.addActionListener( new StyledEditorKit.ItalicAction());

		emergente.add(negritaE);
		emergente.add(cursivaE);

		miarea.setComponentPopupMenu(emergente);

		barra = new JToolBar();

		configura_barra("src/graficos/imagenes/bold.png").addActionListener(new StyledEditorKit.BoldAction());
        configura_barra("src/graficos/imagenes/italic.png").addActionListener(new StyledEditorKit.ItalicAction());
        configura_barra("src/graficos/imagenes/subrayado.png").addActionListener(new StyledEditorKit.UnderlineAction());

        barra.addSeparator();

        configura_barra("src/graficos/imagenes/bola_azul.jpg").addActionListener(new StyledEditorKit.ForegroundAction("Pone Azul", Color.BLUE));
        configura_barra("src/graficos/imagenes/bola_amarilla.jpg").addActionListener(new StyledEditorKit.ForegroundAction("Pone Amarillo", Color.YELLOW));
        configura_barra("src/graficos/imagenes/bola_roja.jpg").addActionListener(new StyledEditorKit.ForegroundAction("Pone Rojo", Color.RED));

        barra.addSeparator();

        configura_barra("src/graficos/imagenes/izquierda.jpg").addActionListener(new StyledEditorKit.AlignmentAction("Izquierda", 0));
        configura_barra("src/graficos/imagenes/centrado.png").addActionListener(new StyledEditorKit.AlignmentAction("Centrado", 1));
        configura_barra("src/graficos/imagenes/derecha.png").addActionListener(new StyledEditorKit.AlignmentAction("Derecha", 2));
        configura_barra("src/graficos/imagenes/justificado.jpg").addActionListener(new StyledEditorKit.AlignmentAction("Justificado", 3));


		barra.setOrientation(1);

		add(barra, BorderLayout.WEST);

	}

	public JButton configura_barra(String ruta){

	    JButton boton = new JButton(new ImageIcon(ruta));

	    barra.add(boton);

	    return boton;

    }

	public void cofigura_menu(String rotulo,String menu, String tipo_letra, int estilos, int tam){

		JMenuItem elem_menu = new JMenuItem(rotulo);

		if(menu == "fuente"){

			fuente.add(elem_menu);

			if (tipo_letra == "Arial") {
				elem_menu.addActionListener(new StyledEditorKit.FontFamilyAction("cambiar_letra", "Arial"));
			} else if(tipo_letra== "Courier"){
				elem_menu.addActionListener(new StyledEditorKit.FontFamilyAction("cambiar_letra", "Courier"));
			} else if(tipo_letra== "Verdana"){
				elem_menu.addActionListener(new StyledEditorKit.FontFamilyAction("cambiar_letra", "Verdana"));
			}

		} else if(menu == "estilo"){

			estilo.add(elem_menu);

			if(estilos == Font.BOLD){

				elem_menu.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_N, InputEvent.CTRL_DOWN_MASK));
				elem_menu.addActionListener(new StyledEditorKit.BoldAction());

			} else if(estilos == Font.ITALIC){

				elem_menu.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_K, InputEvent.CTRL_DOWN_MASK));
				elem_menu.addActionListener(new StyledEditorKit.ItalicAction());
			}

		} else if(menu == "tamaño"){
			tamagno.add(elem_menu);
			elem_menu.addActionListener(new StyledEditorKit.FontSizeAction("cambia_tamaño", tam));
		}

	}


	JTextPane miarea;
	JMenu fuente, estilo, tamagno;
	Font letras;

	JButton negritaBarra, cursivaBarra, subraBarra, azulBarra, rojoBarra, amarilloBarra, a_izquierda, a_centrado, a_derecha, a_justificado;

	JToolBar barra;
}