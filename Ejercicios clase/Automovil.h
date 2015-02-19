#include<iostream>
#include<string>
#include "Servicio.h";

using namespace std;


class Automovil
{
    private:
        string placa;
        int numServicios;
        Servicio servicios[100];

    public:
        Automovil();
        Automovil(string);
        void visualizarServicios();
        int getNumServicios();
        float getMontoServicios();
        void setPlaca(string);
        void agregarServicio(int, string);
        string getPlaca();

};

Automovil::Automovil()
{
    numServicios = 0;
}

Automovil::Automovil(string placa)
{
    this->placa = placa;
    numServicios = 0;

}

void Automovil::visualizarServicios()
{
     for (int i = 0; i < numServicios; i++)
    {
        cout << "Monto "  << (i+1) << ": " << servicios[i].getMonto() << endl;
    }
}

int Automovil::getNumServicios()
{
    return numServicios;
}


float Automovil::getMontoServicios()
{
    float total = 0;
    for (int i = 0; i < numServicios; i++)
        total+=servicios[i].getMonto();
    return total;
}

void Automovil::setPlaca(string placa)
{
    this->placa = placa;
}

string Automovil::getPlaca()
{
    return this->placa;
}

void Automovil::agregarServicio(int monto, string nombre)
{
    Servicio servicio(monto,nombre);
    servicios[numServicios] = servicio;
    numServicios++;
}
