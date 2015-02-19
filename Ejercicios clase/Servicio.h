#include <iostream>
#include "string.h"
using namespace std;


class Servicio{
private:
    int monto;
    string nombre;

public:
    Servicio();
    Servicio(int ,string);
    void setMonto(int);
    int getMonto();

};
Servicio::Servicio(){}
Servicio::Servicio(int monto,string nombre){
    this->monto=monto;
    this->nombre=nombre;

}
void Servicio::setMonto(int monto){
    this->monto=monto;
}
int Servicio::getMonto(){
    return monto;
}

