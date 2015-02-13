#ifndef __Biblioteca__Biblioteca__
#define __Biblioteca__Biblioteca__

#include <iostream>
#include "Libro.h"

using namespace std;

class Biblioteca {
private:
    Libro libros[10];
    int pos;
public:
    Biblioteca();

    void agregar(Libro libro);
    void eliminar(string titulo);
    void verAutor(string autor);
    void verEditorial(string editorial);
    void despues(int publicacion);
    void antes(int ublicacion);
    void rangoFecha(int inicio,int fin);
    void imprime(string titulo);

};

Biblioteca::Biblioteca(){
    pos=0;
}

void Biblioteca::agregar(Libro libro){
    if(pos<10){
        libros[pos++] = libro;
    }else{
        cout << "Biblioteca llena" << endl;
    }
}

void Biblioteca::eliminar(string titulo)
{
  for (int i = 0; i < pos; i++) {
    if(titulo == libros[i].getTitulo()){
        for(int j=i;i<10;i++){
            libros[j]=libros[j+1];
        }
        pos--;
    }
  }
}


void Biblioteca::verAutor(string autor){
    for (int i = 0; i < pos; i++) {
        if(autor == libros[i].getAutor()){
            cout << libros[i].getTitulo()<< endl;
        }
    }
}
void Biblioteca::verEditorial(string editorial){
    for (int i = 0; i < pos; i++) {
        if(editorial == libros[i].getEditorial()){
            cout << libros[i].getTitulo()<< endl;
        }
    }
}


void Biblioteca::despues(int publicacion){
    for (int i = 0; i < pos; i++) {
        if(publicacion < libros[i].getPublicacion()){
            cout << libros[i].getTitulo()<< endl;
        }
    }
}


void Biblioteca::antes(int publicacion){
    for (int i = 0; i < pos; i++) {
        if(publicacion > libros[i].getPublicacion()&&libros[i].getPublicacion()>0){
            cout << libros[i].getTitulo() << " " << libros[i].getPublicacion()<< endl;
        }
    }
}


void Biblioteca::rangoFecha(int inicio,int fin){
    for (int i = 0; i < pos; i++) {
        if(inicio <= libros[i].getPublicacion()&&fin >= libros[i].getPublicacion()){
            cout << libros[i].getTitulo() << endl;
        }
    }
}


void Biblioteca::imprime(string titulo){
    for(int i = 0;i < 10;i++){
        if(titulo == libros[i].getTitulo()){
          cout << "Titulo: " << libros[i].getTitulo() << endl << "Autor: " << libros[i].getAutor() << endl;
          cout << "Numero de paginas: " << libros[i].getPaginas() << endl << "Edicion numero: " << libros[i].getEdicion();
          cout << endl << "Editorial: " << libros[i].getEditorial() << endl << "Ano de publicacion: ";
          cout << libros[i].getPublicacion() << endl << endl;
        }
    }
}

#endif // __Biblioteca__Biblioteca__



