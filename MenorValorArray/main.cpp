#include "include/funciones.hpp"

#include <iostream>

using namespace std;

int main() 
    {
        int n;

        cout << "ENCONTRANDO AL MENOR DEL ARRAY" << endl;
        cout << "******************************" << endl << endl;

        // Solicita al usuario el tamaño del arreglo.
        cout << "Ingrese el tamanio del arreglo ";
        cin >> n;

        if (n <= 0) 
            {
                cout << "El tamanio del arreglo debe ser mayor a 0." << endl;
                return 1;
            }

        // Crea el arreglo dinámico.
        int* numeros = new int[n];

        // Llena el arreglo.
        rellenarArray(numeros, n);

        // Encuentra el menor número.
        int* menor = encontrarMenor(numeros, n);

        // Muestra el número más chico y su dirección de memoria.
        cout << endl << "El menor numero es: " << *menor << endl;
        cout << "Se encuentra en la direccion de memoria: " << menor << endl;

        // Libera la memoria dinámica.
        delete[] numeros;

        return 0;
    }