#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{ 
  
   int filas;
   int columnas;
   int suma;

   int respuestas[5] = { 0, 0, 0, 0, 0 };
   
    int filas = 5;
    int columnas = 2;

   int numeros[filas][columnas] =
    {
        { ' ', ' '},
        { ' ', ' '},
        { ' ', ' '},
        { ' ', ' '},
        { ' ', ' '},

    };

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j] << ' ';
        }
        
        cout << endl;
    }
    
    suma = filas + columnas;
    cout << "Total Suma: "<< suma << endl;

 return 0;

}
    


















