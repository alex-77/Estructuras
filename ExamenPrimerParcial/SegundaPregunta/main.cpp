#include <iostream>
using namespace std;
#include "Vehiculos.h"
#include "OrdenamientoGenerico.h"
#include"Venta.h"
void imprime(Vehiculo vehiculos[]){
        for(int i = 0; i < 3; i++){
        cout << "Vehiculo Marca: "  << vehiculos[i].getMarca() << endl;
        cout << "Año: "  << vehiculos[i].getModelo() << endl;
        cout << "Kilometraje: "  << vehiculos[i].getKilometraje() << endl;
        cout << "Codigo del coche: "<<vehiculos[i].getCodigo()<<endl;
        cout << "Tipo de coche: "<<vehiculos[i].getTipo()<<endl;
        cout << "Precio de coche: "<<vehiculos[i].getMonto()<<endl;
        cout<<endl;

        }
}

int main(){
    Vehiculo vehiculos[3];
    Venta ventas[10];
    int opcion;
    int forma;
    int tipo;

    cout << "Autos con dueño: Alejandro" << endl;
    b.verDueño("Alejandro");

    Venta b;
    Vehiculo a("marca","tipo",2000,333,1234,100,"alejandro");
    b.agregar(a);

    vehiculos[0].setMarca("honda");
    vehiculos[1].setMarca("fwd");
    vehiculos[2].setMarca("dodge");

     vehiculos[0].setModelo(1999);
    vehiculos[1].setModelo(2000);
    vehiculos[2].setModelo(2015);

     vehiculos[0].setKilometraje(123);
    vehiculos[1].setKilometraje(34);
    vehiculos[2].setKilometraje(1222);

     vehiculos[0].setMonto(222);
    vehiculos[1].setMonto(333);
    vehiculos[2].setMonto(444);

     vehiculos[0].setCodigo(111);
    vehiculos[1].setCodigo(999);
    vehiculos[2].setCodigo(222);

     vehiculos[0].setTipo("camioneta");
    vehiculos[1].setTipo("coche");
    vehiculos[2].setTipo("moto");
    imprime(vehiculos);

    Ordenamiento<Vehiculo>::burbuja(vehiculos,3, [](Vehiculo a, Vehiculo b){ if (a.getMonto() < b.getMonto()) return true; return false;  });
    imprime(vehiculos);
}
