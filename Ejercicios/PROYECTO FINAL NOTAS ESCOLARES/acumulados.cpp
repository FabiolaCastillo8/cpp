#include <iostream>
#include "alumnos.h"
#include "clasesDisponibles.h"

using namespace std;

string arregloAcumulados[100];
int ultimaLinea = 0;


void mostrarAcumulados() {
    system("cls");

    string codigoAlumno = "";
    string nombreAlumno = "";
    
    string codigoClase = "";
    string nombreClase = "";

    char continuar = 'n';

    while(true) {
        cout << "Ingrese el codigo del alumno: ";
        cin >> codigoAlumno;

        nombreAlumno = buscarAlumno(codigoAlumno);

        if (nombreAlumno != "") {
            cout << endl;
            cout << nombreAlumno << endl;
            system("pause");
            break;
        } else {
           cout << "No se encontro el alumno, desea continuar? s/n" << endl;
           cin >> continuar;
           
           if (continuar == 'n' || continuar == 'N') {
               return;
            }
        }
    }

    while(true) {
        cout << "Ingrese el codigo de la clase: ";
        cin >> codigoClase;

        nombreClase = buscarClase(codigoClase);

        if (nombreClase != "") {
            cout << endl;
            cout << nombreClase << endl;
           system("pause");
           break;
        } else {
           cout << "No se encontro la clase, desea continuar? s/n" << endl;
           cin >> continuar;
           
           if (continuar == 'n' || continuar == 'N') {
               return;
            }
        }
    }

    arregloAcumulados[ultimaLinea] = codigoAlumno + " | " + nombreAlumno + " - " + codigoClase + " | " + nombreClase;
    ultimaLinea++;

   return;
}    

 