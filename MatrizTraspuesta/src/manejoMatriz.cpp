#include "../include/manejoMatriz.hpp"

#include <iostream>

using namespace std;

int** crearMatriz(int filas, int columnas) 
    {
        int** matriz = new int*[filas];
        
        for (int i = 0; i < filas; i++) 
            {
                matriz[i] = new int[columnas];
            }

        return matriz;
    }

void liberarMatriz(int** matriz, int filas) 
    {
        for (int i = 0; i < filas; i++) 
            {
                delete[] matriz[i];
            }

        delete[] matriz;
    }

void rellenarMatriz(int** matriz, int filas, int columnas) 
    {
        cout << "Introduce los valores de la matriz:" << endl;

        for (int i = 0; i < filas; i++) 
            {
                for (int j = 0; j < columnas; j++) 
                    {
                        cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
                        cin >> matriz[i][j];
                    }
            }
    }

int** crearTraspuesta(int** matrizOriginal, int filas, int columnas) 
    {
        int** traspuesta = crearMatriz(columnas, filas);

        for (int i = 0; i < filas; i++) 
            {
                for (int j = 0; j < columnas; j++) 
                    {
                        traspuesta[j][i] = matrizOriginal[i][j];
                    }
            }

        return traspuesta;
    }

void imprimirMatriz(int** matriz, int filas, int columnas) 
    {
        for (int i = 0; i < filas; i++) 
            {
                for (int j = 0; j < columnas; j++) 
                    {
                        cout << matriz[i][j] << "\t";
                    }

                cout << endl;
            }
    }