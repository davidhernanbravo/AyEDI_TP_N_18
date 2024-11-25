#include <iostream>

using namespace std;

// Función para rellenar el arreglo con números ingresados por el usuario.
void rellenarArray(int* array, int tamano) 
    {
        for (int i = 0; i < tamano; ++i) 
            {
                cout << "Ingresa un numero para la posicion " << i << ": ";
                cin >> array[i];
            }
    }

// Función para encontrar el menor elemento utilizando punteros.
int* encontrarMenor(int* array, int tamano) 
    {
        int* menor = array; // Apunta al primer elemento.
        for (int i = 1; i < tamano; ++i) 
            {
                if (*(array + i) < *menor) 
                    {
                        menor = (array + i); // Actualiza el puntero al menor valor.
                    }
            }
        return menor;
    }