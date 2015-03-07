#ifndef __Persona__
#define __Persona__

#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
	string nombre;
	int edad;
	string fechaN;
public:
	Persona();
	Persona(string nombre,int edad,string fechaN);
	~Persona();
	friend ostream & operator <<(std::ostream &, Persona &);
};
Persona::Persona()
{
	nombre = "";
	edad = 0;
	fechaN="";
}

Persona::Persona(string nombre, int edad,string fechaN){
	this->nombre = nombre;
	this->edad = edad;
	this->fechaN=fechaN;
}

Persona::~Persona()
{
}

std::ostream & operator <<(std::ostream & os, Persona & p)
{
	os << "Nombre: " << p.nombre << " Edad: " << p.edad <<" Fecha de Nacimiento: "<<p.fechaN<< endl;
	return os;
}


#endif
