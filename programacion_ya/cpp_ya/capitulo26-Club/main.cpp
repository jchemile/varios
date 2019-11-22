#include <iostream>

using namespace std;

class Socio{
private:
    char nombre[40];
    int antiguedad;
public:
    Socio();
    void imprimir();
    int retornarAntiguedad();
};

class Club{
private:
    Socio socio1, socio2, socio3;
public:
    void mayorAntiguedad();
};

Socio::Socio()
{
    cout << "Nombre: ";
    cin.getline(nombre, 40);
    cout << "Antiguedad: ";
    cin >> antiguedad;
    cin.get();
}

void Socio::imprimir()
{
    cout << "Nombre: " << nombre << ". Antiguedad: " << antiguedad << endl;
}

int Socio::retornarAntiguedad()
{
    return antiguedad;
}

void Club::mayorAntiguedad()
{
    if(socio1.retornarAntiguedad() > socio2.retornarAntiguedad() && socio1.retornarAntiguedad() > socio3.retornarAntiguedad())
        cout << "SOCIO 1";
    else
        if(socio2.retornarAntiguedad() > socio3.retornarAntiguedad())
            cout << "SOCIO 2";
        else
            cout << "SOCIO 3";
}

int main()
{
    Club argentino;
    argentino.mayorAntiguedad();
    return 0;
}
