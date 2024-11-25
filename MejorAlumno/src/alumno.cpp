#include "../include/alumno.hpp"

#include <iostream>

using namespace std;

// Reserva memoria para un nuevo alumno y retorna su puntero.
Alumno* crearAlumno() 
    {
        return new Alumno;
    }

// Pide al usuario los datos de un alumno y los almacena.
void ingresarDatosAlumno(Alumno* alumno) 
    {
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, alumno->nombre); // Permite nombre con espacios.

        cout << "Edad: ";
        cin >> alumno->edad;

        cout << "Promedio: ";
        cin >> alumno->promedio;

        cout << endl;
    }

// Busca el alumno con el mejor promedio en un arreglo de alumnos.
Alumno* buscarMejorAlumno(Alumno* alumnos[], int cantidad) 
    {
        Alumno* mejorAlumno = alumnos[0]; // Asumimos que el primero es el mejor.

        for (int i = 1; i < cantidad; i++) 
            {
                if (alumnos[i]->promedio > mejorAlumno->promedio) 
                    {
                        mejorAlumno = alumnos[i];
                    }
            }

        return mejorAlumno; // Retorna el puntero al mejor alumno.
    }

// Libera la memoria asignada a cada alumno en el arreglo.
void liberarMemoria(Alumno* alumnos[], int cantidad) 
    {
        for (int i = 0; i < cantidad; i++) 
            {
                delete alumnos[i];
            }
    }