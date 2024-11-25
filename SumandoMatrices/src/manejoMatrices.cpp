#include "../include/manejoMatrices.hpp"

#include <iostream>

using namespace std;

// Función para crear una matriz dinámica.
int** crearMatriz(int filas, int columnas) 
    {
        int** matriz = new int*[filas]; // Reserva espacio para las filas.

        for (int i = 0; i < filas; i++) 
            {
                matriz[i] = new int[columnas]; // Reserva espacio para las columnas.
            }

        return matriz;
    }

// Función para liberar la memoria de una matriz.
void liberarMatriz(int** matriz, int filas) 
    {
        for (int i = 0; i < filas; i++) 
            {
                delete[] matriz[i]; // Libera cada fila.
            }

        delete[] matriz; // Libera el arreglo de filas.
    }

// Función para rellenar una matriz con valores proporcionados por el usuario.
void rellenarMatriz(int** matriz, int filas, int columnas) 
    {
        cout << endl << "Introduce los valores de la matriz:" << endl;

        for (int i = 0; i < filas; i++) 
            {
                for (int j = 0; j < columnas; j++) 
                    {
                        cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
                        cin >> matriz[i][j];
                    }
            }
    }

// Función para sumar dos matrices.
int** sumarMatrices(int** matrizA, int** matrizB, int filas, int columnas) 
    {
        int** resultado = crearMatriz(filas, columnas);

        for (int i = 0; i < filas; i++) 
            {
                for (int j = 0; j < columnas; j++) 
                    {
                        resultado[i][j] = matrizA[i][j] + matrizB[i][j];
                    }
            }
            
        return resultado;
    }

// Función para imprimir una matriz.
void imprimirMatriz(int** matriz, int filas, int columnas) 
{
    cout << endl << "Matriz Resultante:" << endl;
    cout << "*****************" << endl << endl;

    for (int i = 0; i < filas; i++) 
        {
            for (int j = 0; j < columnas; j++) 
                {
                    cout << matriz[i][j] << "\t";
                }
                
            cout << endl;
        }
}