package stackoverflow;

public class NumerosPrimos {

    public static void main(String[] args){
        CalculoPrimo numeroPrimo = new CalculoPrimo();
        for (int i = 0; i < 10000; i++){
            if(numeroPrimo.esPrimo(i)) System.out.println(i);
        }
    }
}
class CalculoPrimo{
    private int contador;
    private boolean primo;

    public boolean esPrimo(int numero){
        primo = true;
        contador = 2;

        while(primo && contador != numero){
            if(numero % contador == 0 || numero == 1) primo = false;
            contador++;
        }
        return primo;
    }
}
