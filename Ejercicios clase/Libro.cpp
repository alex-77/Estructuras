#include "Libro.h"

Libro::Libro() : Libro("Sin t�tulo", 0, "---")
{

}

Libro::Libro(std::string t, int ap, std::string i) : titulo(t), anio_pub(ap), isbn(i)
{

}

std::ostream & operator <<(std::ostream & os, Libro & libro)
{
    os << libro.titulo << std::endl;

    return os;
}
