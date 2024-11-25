#ifndef MANEJOMATRICES_HPP
#define MANEJOMATRICES_HPP

// Declaración de funciones para manejo de matrices.
int** crearMatriz(int filas, int columnas);
void liberarMatriz(int** matriz, int filas);
void rellenarMatriz(int** matriz, int filas, int columnas);
int** sumarMatrices(int** matrizA, int** matrizB, int filas, int columnas);
void imprimirMatriz(int** matriz, int filas, int columnas);

#endif // MANEJOMATRICES_HPP