package colecciones;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class CuentasUsuarios {

    public static void main(String[] args) {

        Cliente cl1 = new Cliente("Antonio Banderas", "00001", 200000);
        Cliente cl2 = new Cliente("Rafael Nadal", "00002", 20000);
        Cliente cl3 = new Cliente("Jose fina", "00003", 300000);
        Cliente cl4 = new Cliente("Julio Banderas", "00004", 200000);
        Cliente cl5 = new Cliente("Antonio Banderas", "00001", 200000);

        Set<Cliente> clientesBanco = new HashSet<Cliente>();

        clientesBanco.add(cl1);
        clientesBanco.add(cl2);
        clientesBanco.add(cl3);
        clientesBanco.add(cl4);
        clientesBanco.add(cl5);


/*        for (Cliente cliente:clientesBanco) {
            //System.out.println(cliente.getNombre() + " " + cliente.getN_cuenta() + " " + cliente.getSaldo());

           if(cliente.getNombre().equals("Julio Banderas")){
               clientesBanco.remove(cliente);
           }
        }*/

        Iterator<Cliente> it = clientesBanco.iterator();

        while (it.hasNext()){
            String nombre_cliente = it.next().getNombre();

            if(nombre_cliente.equals("Julio Banderas")){
                it.remove();
            }
        }

        for (Cliente cliente:clientesBanco) {
            System.out.println(cliente.getNombre() + " " + cliente.getN_cuenta() + " " + cliente.getSaldo());
        }

/*        Iterator<Cliente> it = clientesBanco.iterator();

        while (it.hasNext()){
            String nombre_cliente = it.next().getNombre();
            System.out.println(nombre_cliente);
        }*/
    }
}
