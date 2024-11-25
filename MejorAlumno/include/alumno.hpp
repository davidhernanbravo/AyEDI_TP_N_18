#ifndef ALUMNO_HPP
#define ALUMNO_HPP

#include <string> // Para trabajar con cadenas de texto.

using namespace std;

struct Alumno 
    {
        string nombre;
        int edad;
        double promedio;
    };

// Funciones relacionadas con el manejo de alumnos.
Alumno* crearAlumno();
void ingresarDatosAlumno(Alumno* alumno);
Alumno* buscarMejorAlumno(Alumno* alumnos[], int cantidad);
void liberarMemoria(Alumno* alumnos[], int cantidad);

#endif