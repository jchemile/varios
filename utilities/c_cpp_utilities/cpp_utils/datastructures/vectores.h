#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

using namespace std;

void prueba_vectores()
{
    char vectorPrueba[5] = "pera";
    char vectorResultante[5] = "";

    for(int i = 0; i < 4; i++)
    {
        cout << vectorPrueba[i] << endl;
    }

    cout << "" << endl;

    for(int i = 4; i >= 0; i--){
        cout << vectorPrueba[i] << endl;
    }


    for(int i = 0; i <= 4; i++){
            vectorResultante[i] = vectorPrueba[4-i];
    }

    cout << "Resultante" << endl;
        for(int i = 0; i <= 4; i++){
        cout << vectorResultante[i] << endl;
    }
}

#endif // VECTORES_H_INCLUDED
