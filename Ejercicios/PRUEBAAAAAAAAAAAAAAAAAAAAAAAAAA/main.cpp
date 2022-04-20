#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[5];
    int arreglo [5][2];
    
    int suma[5] = { 0, 0, 0, 0, 0 };

    //cout << "Ingrese los numeros" << endl << endl;

    for (int i = 0; i < 5; i++)
   {
    cout << "Ingrese los numeros: ";
    cin >> numeros[i];
    cout << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << arreglo[j][0] << ": ";
        cin >> arreglo[j][1];

        //if (arreglo[j][1] == 's') {
          //  suma[j]++;
        //}
        
    }
     
     cout << endl;
   }

   //cout << "Resumen" << endl;
   cout << "Respuesta pregunta 1: " << arreglo[0] << endl;
   cout << "Respuesta pregunta 2: " << arreglo[1] << endl;
   cout << "Respuesta pregunta 3: " << arreglo[2] << endl;
   cout << "Respuesta pregunta 3: " << arreglo[2] << endl;
   cout << "Respuesta pregunta 3: " << arreglo[2] << endl;







  //int numeros[5][2];

    //numeros[0][0] = '0';
    //numeros[0][1] = '0';

    //numeros[1][0] = '0';
   // numeros[1][1] = '0';

    //numeros[2][0] = '0';
    //numeros[2][1] = '0';

    //numeros[3][0] = '0';
    //numeros[3][1] = '0';

    //numeros[4][0] = '0';
    //numeros[4][1] = '0';






    //for (int i = 0; i < 5; i++)
   // {
     //   for (int j = 0; j < 2; j++)
       // {
         //   cout << numeros[i][j] << ' ';
       // }
        
       // cout << endl;
    //}
    

// return 0;

    int filas = 5;
    int columnas = 2;

    int respuestas[5] = { 0, 0, 0, 0, 0 };

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
    
    


        for (int i = 0; i < 3; i++)
   {
    cout << "Ingrese su nombre: ";
    cin >> numeros[i];
    cout << endl;

    for (int j = 0; j < 3; j++)
    {
        cout << encuesta[j][0] << ": ";
        cin >> encuesta[j][1];

        if (encuesta[j][1] == "s") {
            respuestas[j]++;
        }
        
    }
     
     cout << endl;
   }

   cout << "Resumen" << endl;
   cout << "Respuesta pregunta 1: " << respuestas[0] << endl;
   cout << "Respuesta pregunta 2: " << respuestas[1] << endl;
   cout << "Respuesta pregunta 3: " << respuestas[2] << endl;


 return 0;




    return 0;
}
