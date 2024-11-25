#ifndef MANEJOMATRIZ_HPP
#define MANEJOMATRIZ_HPP

int** crearMatriz(int filas, int columnas);
void liberarMatriz(int** matriz, int filas);
void rellenarMatriz(int** matriz, int filas, int columnas);
int** crearTraspuesta(int** matrizOriginal, int filas, int columnas);
void imprimirMatriz(int** matriz, int filas, int columnas);

#endif