#include<iostream>
#include<cstdlib>
#include<string>
#include "OrdenamientoGenerico.h"
using namespace std;
void imprime(string cadena[]){

    cout << endl;
    for (int i = 0; i < 100; i++){
       cout << cadena[i] << endl;
    }
}
int main(){
    string cadena[100];
    for (int j = 0; j < 100; j++){
        int l = 10+rand()%15;
        string str = "";
        for (int i = 0; i < l; i++){
            str += (char)(rand()%26+'a');
        }
        cadena[j] = str;
    }

    int opcion;
    int forma;
    cout <<"Selecione una opcion"<<endl<< "1)Burbuja 2)Insercion 3)Seleccion: ";
    cin >> opcion;
    cout << "1)Ascendente 2)Descendente: ";
    cin >> forma;

    switch(opcion)

{

    case 1:
        if (forma == 1)  Ordenamiento<string>::burbuja(cadena,100,Ordenamiento<string>::asc);
        else             Ordenamiento<string>::burbuja(cadena,100,Ordenamiento<string>::desc);
        imprime(cadena);
    break;

    case 2:
        if (forma == 1)  Ordenamiento<string>::insercion(cadena,100,Ordenamiento<string>::asc);
        else           Ordenamiento<string>::insercion(cadena,100,Ordenamiento<string>::desc);
        imprime(cadena);    break;

    case 3:
         if (forma == 1)  Ordenamiento<string>::seleccion(cadena,100,Ordenamiento<string>::asc);
        else           Ordenamiento<string>::seleccion(cadena,100,Ordenamiento<string>::desc);
        imprime(cadena);
    break;

    default: cout<<"Opcion no valida"<<endl;


}


}

