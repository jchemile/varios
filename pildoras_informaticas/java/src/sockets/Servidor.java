package sockets;

import javax.swing.*;
import java.awt.*;
import java.io.*;
import java.net.*;
import java.util.ArrayList;


public class Servidor {

    public static void main(String[] args) {

        MacroServidor mimarco = new MacroServidor();

        mimarco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}

class MacroServidor extends JFrame implements Runnable{

    public MacroServidor(){

        setBounds(1200, 300, 280, 350);

        JPanel milamina = new JPanel();

        milamina.setLayout(new BorderLayout());

        areatexto = new JTextArea();

        milamina.add(areatexto, BorderLayout.CENTER);

        add(milamina);

        setVisible(true);

        Thread mihilo = new Thread(this);

        mihilo.start();

    }

    @Override
    public void run() {

        try {
            ServerSocket servidor = new ServerSocket(9999);

            String nick, ip, mensaje;

            ArrayList<String> listaIp = new ArrayList<String>();

            PaqueteEnvio paquete_recibido;

            while (true) {
                Socket misocket = servidor.accept();

                ObjectInputStream paquete_datos = new ObjectInputStream(misocket.getInputStream());

                paquete_recibido = (PaqueteEnvio) paquete_datos.readObject();

                nick = paquete_recibido.getNick();

                ip = paquete_recibido.getIp();

                mensaje = paquete_recibido.getMensaje();

/*              DataInputStream flujo_entrada = new DataInputStream(misocket.getInputStream());

                String mensaje_texto = flujo_entrada.readUTF();

                areatexto.append("\n" + mensaje_texto);*/

                if(!mensaje.equals(" online")) {

                    areatexto.append("\n" + nick + ": " + mensaje + " para " + ip);

                    Socket enviaDestinatario = new Socket(ip, 9090);

                    ObjectOutputStream paqueteReenvio = new ObjectOutputStream(enviaDestinatario.getOutputStream());

                    paqueteReenvio.writeObject(paquete_recibido);

                    enviaDestinatario.close();

                    misocket.close();
                } else {
                    InetAddress localizacion = misocket.getInetAddress();

                    String IpRemota = localizacion.getHostAddress();

                    System.out.println(IpRemota);

                    listaIp.add(IpRemota);

                    paquete_recibido.setIps(listaIp);

                    for (String z:listaIp){
                        System.out.println("Array: " + z);

                        Socket enviaDestinatario = new Socket(z, 9090);

                        ObjectOutputStream paqueteReenvio = new ObjectOutputStream(enviaDestinatario.getOutputStream());

                        paqueteReenvio.writeObject(paquete_recibido);

                        enviaDestinatario.close();

                        misocket.close();
                    }

                }
            }
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }

    private JTextArea areatexto;
}