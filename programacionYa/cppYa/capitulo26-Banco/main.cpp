#include <iostream>
#include <string.h>

using namespace std;

class Cliente{
private:
    char nombre[40];
    float monto;
public:
    Cliente(char nom[40]);
    void depositar(int m);
    void extraer(int m);
    float retornarMonto();
    void imprimir();
};

class Banco{
private:
    Cliente cliente1, cliente2, cliente3;
public:
    Banco();
    void operar();
    void depositosTotales();
};

Cliente::Cliente(char nom[40])
{
    strcpy(nombre, nom);
    monto = 0;
}

void Cliente::depositar(int m)
{
    monto = monto + m;
}

void Cliente::extraer(int m)
{
    monto = monto - m;
}

float Cliente::retornarMonto()
{
    return monto;
}

void Cliente::imprimir()
{
    cout << "Nombre: " << nombre << " Monto: " << monto << endl;
}

Banco::Banco():cliente1("Juan"),cliente2("Pedro"), cliente3("Luis")
{

}

void Banco::operar()
{
    cliente1.depositar(100);
    cliente2.depositar(150);
    cliente3.depositar(200);
    cliente3.extraer(150);
}

void Banco::depositosTotales()
{
    float t = cliente1.retornarMonto() + cliente2.retornarMonto() + cliente3.retornarMonto();
    cout << "Total de dinero en el banco es: " << t << endl;
    cliente1.imprimir();
    cliente2.imprimir();
    cliente3.imprimir();
}

int main()
{
    Banco banco1;
    banco1.operar();
    banco1.depositosTotales();
    return 0;
}
