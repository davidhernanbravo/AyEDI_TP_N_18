#include "include/manejoMatrices.hpp"

#include <iostream>

using namespace std;

int main() 
{
    int filas, columnas;

    cout << "SUMADOR DE MATRICES" << endl;
    cout << "*******************" << endl << endl;

    // Solicita las dimensiones de las matrices.
    cout << "Introduce el numero de filas: ";
    cin >> filas;

    cout << "Introduce el numero de columnas: ";
    cin >> columnas;

    // Crea las dos matrices.
    int** matrizA = crearMatriz(filas, columnas);
    int** matrizB = crearMatriz(filas, columnas);

    // Rellena las matrices con valores proporcionados por el usuario.
    cout << endl << "Rellena la primera matriz:" << endl;
    rellenarMatriz(matrizA, filas, columnas);

    cout << endl << "Rellena la segunda matriz:" << endl;
    rellenarMatriz(matrizB, filas, columnas);

    // Suma las dos matrices.
    int** matrizResultado = sumarMatrices(matrizA, matrizB, filas, columnas);

    // Imprime la matriz resultante.
    imprimirMatriz(matrizResultado, filas, columnas);

    // Libera la memoria utilizada por las matrices.
    liberarMatriz(matrizA, filas);
    liberarMatriz(matrizB, filas);
    liberarMatriz(matrizResultado, filas);

    return 0;
}