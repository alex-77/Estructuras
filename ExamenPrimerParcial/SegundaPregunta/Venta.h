#ifndef Venta_H
#define Venta_H

#include "Vehiculos.h"

#include <iostream>
#include <string.h>

using namespace std;

class Venta
{

    Vehiculo asign[10];
    int posi;
public:
    Venta();
    void agregar(Vehiculo a);

};

    Venta::Venta(){
        posi=0;
    }
    void Venta::agregar(Vehiculo a){
        asign[posi]=a;
        posi++;
    }


#endif
