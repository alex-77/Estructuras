#include<iostream>
#include "Automovil.h"
using namespace std;

int main()
{
    Automovil autos[20];
    int numAutos = 3;
    for (int i = 0; i < numAutos; i++)
        autos[i].setPlaca(i+"");

    autos[0].agregarServicio(100,"");
    autos[0].agregarServicio(200,"");
    autos[0].agregarServicio(300,"");
    autos[1].agregarServicio(150,"");
    autos[2].agregarServicio(1500,"");
    autos[2].agregarServicio(150,"");
    autos[2].agregarServicio(150,"");
    autos[2].agregarServicio(150,"");

   // autos[0].visualizarServicios();


    int maxNum = 0;
    int maxInv = 0;


    cout << "HISTOGRAMA" << endl;

    for (int i = 0; i < numAutos; i++){
        if (i == 0)
        {
            maxNum = autos[i].getNumServicios();
            maxInv = autos[i].getMontoServicios();
        }

        if (autos[i].getNumServicios() > maxNum)
            maxNum = autos[i].getNumServicios();

        if (autos[i].getMontoServicios() > maxInv)
            maxInv = autos[i].getMontoServicios();


        for (int j = 0; j < autos[i].getNumServicios(); j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "MAXIMO NUMERO SERVICIOS: " << maxNum << endl;
    cout << "MAXIMA INVERSION: " << "$ " << maxInv << endl;


    /*
    for (int i = 0; i < numAutos; i++)
        cout << autos[i].getPlaca() << " ";

    string autoBuscado;
    cout << "Auto a buscar: ";
    cin >> autoBuscado;

    for (int i = 0; i < numAutos; i++)
        if (autos[i].getPlaca() == autoBuscado)
            cout << i;
    */

    return 0;
}
