#include <iostream>
#include "alumnos.h"

using namespace std;

string arregloAcumulados[100];
int ultimaLinea = 0;


void mostrarAcumulados() {
    system("cls");

    string codigoAlumno = "";
    string nombreAlumno = "";
    
    char continuar = 'n';

    while(true) {
        cout << "Ingrese el codigo del alumno: ";
        cin >> codigoAlumno;

        nombreAlumno = buscarAlumno(codigoAlumno);

        if (nombreAlumno != "") {
            cout << endl;
            cout << nombreAlumno << endl;
            break;
        } else {
           cout << "No se encontro el cliente, desea continuar? s/n" << endl;
           cin >> continuar;
           
           if (continuar == 'n' || continuar == 'N') {
               return;
            }
        }
    }
}