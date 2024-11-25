#include <iostream>
using namespace std;

void rellenarArray(int* array, int tamano) 
    {
        for (int i = 0; i < tamano; ++i) 
            {
                cout << "Ingresa un numero para la posicion " << i << ": ";
                cin >> array[i];
            }
    }

void mostrarPares(int* array, int tamano) 
    {
        cout << endl << "Numeros pares y sus posiciones en memoria:" << endl << endl;

        for (int i = 0; i < tamano; ++i) 
            {
                if (array[i] % 2 == 0) 
                    {
                        cout << "Numero: " << array[i] 
                            << " - Direccion: " << (array + i) << endl;
                    }
            }
    }