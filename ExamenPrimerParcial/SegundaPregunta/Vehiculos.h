#ifndef Vehiculos_H
#define Vehiculos_H

#include <iostream>
#include <string.h>
#pragma once
#include<iostream>
using namespace std;

class Vehiculo
{
	private:
		string marca;
		int modelo;
		int  kilometraje;
		string tipo;
		int codigo;
		int monto;
		//string due�o;


	public:
		Vehiculo();
        Vehiculo(string marca,string tipo,int modelo,int kilometraje,int codigo,int monto,string due�o);

		void setMarca(string);
		string getMarca();

		void setModelo(int);
		int getModelo();

		void setKilometraje(int);
		int getKilometraje();

		void setTipo(string);
		string getTipo();

		void setCodigo(int);
		int getCodigo();

		void setMonto(int);
		int getMonto();

		void setDue�o(string);
		string getDue�o();

		//void verDue�o(string due�o);


};

Vehiculo::Vehiculo()
{

}
Vehiculo::Vehiculo(string marca,string tipo,int modelo,int kilometraje,int codigo,int monto,string due�o){
    marca=marca;
    tipo=tipo;
    modelo=modelo;
    kilometraje=kilometraje;
    codigo=codigo;
    monto=monto;
    due�o=due�o;
}

void Vehiculo::setMarca(string marca){ this->marca = marca; }
string Vehiculo::getMarca(){ return this->marca; }

void Vehiculo::setModelo(int  modelo){ this->modelo = modelo; }
int Vehiculo::getModelo(){ return this->modelo; }

void Vehiculo::setKilometraje(int kilometraje){ this->kilometraje = kilometraje; }
int Vehiculo::getKilometraje(){ return this->kilometraje; }

void Vehiculo::setTipo(string tipo){ this->tipo = tipo; }
string Vehiculo::getTipo(){ return this->tipo; }

void Vehiculo::setCodigo(int codigo){ this->codigo = codigo; }
int Vehiculo::getCodigo(){ return this->codigo; }

void Vehiculo::setMonto(int monto){this->monto=monto;};
int Vehiculo::getMonto(){return this->monto;};

void Vehiculo::setDue�o(int due�o){this->due�o=due�o;};
int Vehiculo::getDue�o(){return this->due�o;};
/*
void Vehiculo::verDue�o(string due�o){
    for (int i = 0; i < pos; i++) {
        if(due�o == libros[i].getAutor()){
            cout << vehiculos[i].getDue�o()<< endl;
        }
    }
}*/
#endif




