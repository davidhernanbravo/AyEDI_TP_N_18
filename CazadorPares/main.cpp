#include "include/funciones.hpp"

#include <iostream>

using namespace std;

int main() 
    {
        const int TAMANO = 10;
        int numeros[TAMANO];

        cout << "CAZADOR DE PARES" << endl;
        cout << "****************" << endl << endl;

        rellenarArray(numeros, TAMANO);

        mostrarPares(numeros, TAMANO);

        return 0;
    }