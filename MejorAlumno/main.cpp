#include "include/alumno.hpp"

#include <iostream>

using namespace std;

int main() 
{
    const int NUM_ALUMNOS = 3; // Número de alumnos.
    Alumno* alumnos[NUM_ALUMNOS]; // Arreglo de punteros a estructuras Alumno.

    cout << "BUSCANDO AL/LA SARMIENTO DEL AULA" << endl;
    cout << "*********************************" << endl << endl;

    // Crea y pide al usuario datos de los alumnos.
    for (int i = 0; i < NUM_ALUMNOS; i++) 
        {
            cout << "Introduce los datos del alumno/a " << i + 1 << ":" << endl;
            cout << "----------------------------------" << endl;
            alumnos[i] = crearAlumno(); // Reserva memoria.
            ingresarDatosAlumno(alumnos[i]); // Pide datos.
        }

    // Busca el alumno con el mejor promedio.
    Alumno* mejorAlumno = buscarMejorAlumno(alumnos, NUM_ALUMNOS);

    // Muestra el resultado.
    cout << "****************************************************" << endl;
    cout << "Y EL/LA MAS INTELIGENTE ES... (Ruido de redoblantes)" << endl;
    cout << "****************************************************" << endl << endl;
    cout << "Nombre: " << mejorAlumno->nombre << endl;
    cout << "Edad: " << mejorAlumno->edad << endl;
    cout << "Promedio: " << mejorAlumno->promedio << endl;
    cout << "****************************************************" << endl;

    // Libera la memoria utilizada.
    liberarMemoria(alumnos, NUM_ALUMNOS);

    return 0;
}