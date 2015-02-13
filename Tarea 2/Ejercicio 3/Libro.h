#ifndef __Libro__Libro__
#define __Libro__Libro__

#include <iostream>
#include <string.h>

using namespace std;

class Libro {
  string titulo;
  string autor;
  int pag;
  int edicion;
  string editorial;
  int publicacion;
  int an;

public:
  Libro();
  Libro(string titulo, string autor, int pag, int edicion, string editorial, int publicacion,int an) : titulo(titulo), autor(autor), pag(pag), edicion(edicion), editorial(editorial), publicacion(publicacion),an(an){ }
  string getTitulo();
  string getAutor();
  int getPaginas();
  int getEdicion();
  string getEditorial();
  int getPublicacion();
  int getAn();
  void setTitulo(string titulo);
  void setAutor(string autor);
  void setPaginas(int paginas);
  void setEdicion(int edicion);
  void setEditorial(string editorial);
  void setPublicacion(int publicacion);
  void setAn(int an);
};

Libro::Libro(){

    titulo = "Libro";
    autor = "Autor";
    pag = 0;
    edicion = 0;
    editorial = "Editorial";
    publicacion = 0;
    an=0;

  }


string Libro::getTitulo(){
  return titulo;
}

string Libro::getAutor(){
  return autor;
}

int Libro::getPaginas(){
  return pag;
}

int Libro::getEdicion(){
  return edicion;
}

string Libro::getEditorial(){
  return editorial;
}

int Libro::getPublicacion(){
  return publicacion;
}
int Libro::getAn(){
    return an;
}
void Libro::setTitulo(string titulo){
    this->titulo=titulo;
}
void Libro::setAutor(string autor){
    this->autor=autor;
}
void Libro::setPaginas(int paginas){
    this->pag = pag;
}
void Libro::setEdicion(int edicion){
    this->edicion = edicion;
}
void Libro::setEditorial(string editorial){
    this->editorial=editorial;
}
void Libro::setPublicacion(int publicacion){
    this->publicacion=publicacion;
}
void Libro::setAn(int an){
    this->an=an;
}

#endif // __Libro__Libro__
