int* Fibonacci(int numeros)
{
    int* r = new int[numeros];
    r[0] = 0;

    if(numeros > 1)
    {
        r[1] = 1;
        int index = 2;
        numeros--;

        int x = 0, y = 1;
        for(int i = 0; i < numeros; i++, index++)
        {
            r[index] = x + y;
            x = y;
            y = r[index];
        }
    }
    return r;
}

void implementation()
{
    std:: cout <<"La serie de Fibonacci de 10 digitos es: ";

    int* numeros = Fibonacci(10);
    for( int i = 0; i< 10; i++)
    {
        if(i != 0) std::cout <<", ";
        std::cout << numeros[i];
    }
    delete[] numeros;
}
