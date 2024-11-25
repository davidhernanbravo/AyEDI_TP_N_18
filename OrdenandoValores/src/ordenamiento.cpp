#include <iostream>

using namespace std;

// Función para mostrar el contenido del arreglo.
void mostrarArreglo(int* array, int tamano) 
    {
        for (int i = 0; i < tamano; ++i) 
            {
                cout << array[i] << " ";
            }

        cout << endl;
    }

// Método de Burbuja.
void ordenarBurbuja(int* array, int tamano) 
    {
        for (int i = 0; i < tamano - 1; ++i) 
            {
                for (int j = 0; j < tamano - i - 1; ++j) 
                    {
                        if (array[j] > array[j + 1]) 
                            {
                                // Intercambiar.
                                int temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
                            }
                    }
            }
    }

// Método de Selección.
void ordenarSeleccion(int* array, int tamano) 
    {
        for (int i = 0; i < tamano - 1; ++i) 
            {
                int minIndex = i;

                for (int j = i + 1; j < tamano; ++j) 
                    {
                        if (array[j] < array[minIndex]) 
                            {
                                minIndex = j;
                            }
                    }

                // Intercambiar
                int temp = array[i];
                array[i] = array[minIndex];
                array[minIndex] = temp;
            }
    }

// Método de Inserción.
void ordenarInsercion(int* array, int tamano) 
    {
        for (int i = 1; i < tamano; ++i) 
            {
                int key = array[i];
                int j = i - 1;

                // Mover elementos mayores que la clave una posición adelante.
                while (j >= 0 && array[j] > key) 
                    {
                        array[j + 1] = array[j];
                        j--;
                    }

                array[j + 1] = key;
            }
    }