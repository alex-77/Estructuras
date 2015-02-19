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
		//string dueño;


	public:
		Vehiculo();
        Vehiculo(string marca,string tipo,int modelo,int kilometraje,int codigo,int monto,string dueño);

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

		void setDueño(string);
		string getDueño();

		//void verDueño(string dueño);


};

Vehiculo::Vehiculo()
{

}
Vehiculo::Vehiculo(string marca,string tipo,int modelo,int kilometraje,int codigo,int monto,string dueño){
    marca=marca;
    tipo=tipo;
    modelo=modelo;
    kilometraje=kilometraje;
    codigo=codigo;
    monto=monto;
    dueño=dueño;
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

void Vehiculo::setDueño(int dueño){this->dueño=dueño;};
int Vehiculo::getDueño(){return this->dueño;};
/*
void Vehiculo::verDueño(string dueño){
    for (int i = 0; i < pos; i++) {
        if(dueño == libros[i].getAutor()){
            cout << vehiculos[i].getDueño()<< endl;
        }
    }
}*/
#endif




