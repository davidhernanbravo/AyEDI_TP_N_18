#include <iostream>
#include "include/manejoMatriz.hpp"

using namespace std;

int main() 
{
    int filas, columnas;

    cout << "MATRIZ Y SU TRASPUESTA" << endl;
    cout << "***********************" << endl;

    cout << "Introduce el numero de filas: ";
    cin >> filas;

    cout << endl;

    cout << "Introduce el numero de columnas: ";
    cin >> columnas;

    cout << endl;

    int** matrizOriginal = crearMatriz(filas, columnas);

    rellenarMatriz(matrizOriginal, filas, columnas);

    int** matrizTraspuesta = crearTraspuesta(matrizOriginal, filas, columnas);

    cout << endl << "Matriz Original:" << endl;

    imprimirMatriz(matrizOriginal, filas, columnas);

    cout << endl << "Matriz Traspuesta:" << endl;

    imprimirMatriz(matrizTraspuesta, columnas, filas);

    cout << "Este seria el resultado de cambiar filas por columnas" << endl << endl;
    cout << "HANDLE WITH CARE..." << endl;

    liberarMatriz(matrizOriginal, filas);
    liberarMatriz(matrizTraspuesta, columnas);

    return 0;
}
