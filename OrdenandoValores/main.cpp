#include "include/ordenamiento.hpp"

#include <iostream>

using namespace std;

int main() 
    {
        int n;

            cout << "ARRAY ORDENADO COMO GALLINA PROLIJA" << endl;
            cout << "***********************************" << endl << endl;

            // Solicita al usuario el tamaño del arreglo.
            cout << "Ingrese el tamanio del arreglo: ";
            cin >> n;
        
        if (n <= 0) 
            {
                cout << "El tamanio del arreglo debe ser mayor a 0." << endl;
                return 1;
            }
        
        // Crea el arreglo dinámico.
        int* numeros = new int[n];
        int* copia = new int[n];

        // Llena el arreglo.
        for (int i = 0; i < n; ++i) 
            {
                cout << "Ingresa un numero para la posicion " << i << ": ";
                cin >> numeros[i];

                copia[i] = numeros[i]; // Crea una copia para mostrar diferentes métodos.
            }

        cout << endl << "DIFERENTES METODOS DE ORDENAMIENTO" << endl;
        cout << "**********************************" << endl;

        // Ordena y muestra con el Método de Burbuja.
        cout << endl << "Ordenando con el metodo de Burbuja:" << endl;

        ordenarBurbuja(copia, n);
        mostrarArreglo(copia, n);

        // Restaura la copia y ordena con el Método de Selección.
        for (int i = 0; i < n; ++i) copia[i] = numeros[i];

        cout << endl << "Ordenando con el Metodo de Seleccion:" << endl;

        ordenarSeleccion(copia, n);
        mostrarArreglo(copia, n);

        // Restaura la copia y ordena con el Método de inserción.
        for (int i = 0; i < n; ++i) copia[i] = numeros[i];

        cout << endl << "Ordenando con el Metodo de Insercion:" << endl;
        ordenarInsercion(copia, n);
        mostrarArreglo(copia, n);

        // Liberar memoria dinámica
        delete[] numeros;
        delete[] copia;

        return 0;
    }