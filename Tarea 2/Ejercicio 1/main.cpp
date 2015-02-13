#include <iostream>
#include "Libro.h"
#include "Biblioteca.h"

using namespace std;

int main()
{
    Biblioteca b;
    Libro libro1("Libro1", "Autor1", 100, 1, "Editorial1", 1990);
    Libro libro2("Libro2", "Autor2", 200, 1, "Editorial2", 2000);
    Libro libro3("Libro3", "Autor3", 400, 1, "Editorial3",2012);

    b.agregar(libro1);
    b.agregar(libro2);
    b.agregar(libro3);
    b.imprime("Libro1");
    b.imprime("Libro2");

    b.eliminar("Libro3");

    cout << "Libros con autor: Autor1" << endl;
    b.verAutor("Autor1");
    cout << endl<<"Libros con Editorial: Editorial2" << endl;
    b.verEditorial("Editorial2");
    cout << endl<<"Libros despues de 1999"<<endl;
    b.despues(1999);
    cout << endl<<"Libros despues de 2005"<<endl;
    b.antes(2005);
    cout << endl<<"Libros entre 1995 y 2005"<<endl;
    b.rangoFecha(1995,2005);

    return 0;
}
