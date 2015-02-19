#include "Persona.h"

bool Persona::operator >(Persona & persona)
{
    if(apellido< persona.apellidos)
    {
        if ( nommbre>persona.nombre)
        {
            return true;
        }
        else {
            return false;
        }
        return true;
    }

    return false;
}
bool Persona::operator <(Persona & persona)
{
    return edad<persona.edad;
}
friend std::ostream & operator<<(std::ostream &os,Persona & persona){
 os<< persona.apellidos<<", "<<persona.nombre<<"("<<persona.edad<<")"<<std::endl;
 return os;
}
