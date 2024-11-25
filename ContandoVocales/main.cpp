#include "include/cuentaVocales.hpp"

#include <iostream>

using namespace std;

int main() 
{
    // Crea espacio para la cadena de caracteres.
    char cadena[100];
    
    cout << "Ingresa una cadena de caracteres (maximo 100): ";
    cin.getline(cadena, 100);

    // Arreglo para contar las vocales.
    int conteoVocales[5] = {0}; // Para 'a', 'e', 'i', 'o', 'u'.

    // Llama a la función para contar las vocales.
    contarVocales(cadena, conteoVocales);

    // Muestra los resultados.
    mostrarResultados(conteoVocales);

    return 0;
}