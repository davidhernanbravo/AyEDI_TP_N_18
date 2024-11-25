#include "../include/cuentaVocales.hpp"

#include <iostream>
#include <cctype> // Para tolower.
#include <cstring> // Para strlen.

using namespace std;

void contarVocales(const char* cadena, int* conteoVocales) 
    {
        const char* ptr = cadena; // Puntero para recorrer la cadena.

        // Recorre la cadena hasta el final.
        while (*ptr != '\0') 
            {
                char caracter = tolower(*ptr); // Convierte a minúscula.

                // Verificar si el carácter es una vocal.
                if (caracter == 'a') conteoVocales[0]++;
                else if (caracter == 'e') conteoVocales[1]++;
                else if (caracter == 'i') conteoVocales[2]++;
                else if (caracter == 'o') conteoVocales[3]++;
                else if (caracter == 'u') conteoVocales[4]++;

                ptr++; // Avanza al siguiente carácter.
            }
    }

void mostrarResultados(const int* conteoVocales) 
    {
        cout << endl << "CONTANDO VOCALES" << endl;
        cout << "****************" << endl;
        
        cout << "Resultados:" << endl;
        cout << "Vocal 'a': " << conteoVocales[0] << " veces" << endl;
        cout << "Vocal 'e': " << conteoVocales[1] << " veces" << endl;
        cout << "Vocal 'i': " << conteoVocales[2] << " veces" << endl;
        cout << "Vocal 'o': " << conteoVocales[3] << " veces" << endl;
        cout << "Vocal 'u': " << conteoVocales[4] << " veces" << endl;
        
    }