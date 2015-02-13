#include <iostream>
using namespace std;
#include "Libro.h"
#include "OrdenamientoGenerico.h"
void imprime(Libro libros[]){
        for(int i = 0; i < 3; i++){
        cout << "Titulo: "  << libros[i].getTitulo() << endl;
        cout << "Año: "  << libros[i].getAn() << endl;
        cout << "Edicion: "  << libros[i].getEdicion() << endl;
        cout << endl;
        }
}

int main(){
    Libro libros[3];
    int opcion;
    int forma;
    int tipo;
    libros[0].setTitulo("A");
    libros[1].setTitulo("B");
    libros[2].setTitulo("C");

    libros[0].setAn(2010);
    libros[1].setAn(2012);
    libros[2].setAn(2011);

    libros[0].setEdicion(1);
    libros[1].setEdicion(2);
    libros[2].setEdicion(3);

    cout << "Tipo de ordenamiento"  <<endl<< "1)Burbuja 2)Insercion 3)Seleccion: ";
    cin >> opcion;
    cout << "Orden"<<endl<<  "1)ascendente 2)descendente: ";
    cin >> forma;
    cout << "Tipo: 1)Titulo 2)Año 3)Edicion: ";
    cin >> tipo;
    switch(opcion)
    {

        case 1:
            if (forma == 1){
                if (tipo == 1) Ordenamiento<Libro>::burbuja(libros,3, [](Libro a, Libro b){ if (a.getTitulo() > b.getTitulo()) return true; return false;  });
                if (tipo == 2) Ordenamiento<Libro>::burbuja(libros,3, [](Libro a, Libro b){ if (a.getAn() > b.getAn()) return true; return false;  } );
                if (tipo == 3) Ordenamiento<Libro>::burbuja(libros,3, [](Libro a, Libro b){ if (a.getEdicion() > b.getEdicion()) return true; return false;  });
            }
            else{
                if (tipo == 1) Ordenamiento<Libro>::burbuja(libros,3, [](Libro a, Libro b){ if (a.getTitulo() < b.getTitulo()) return true; return false;  });
                if (tipo == 2) Ordenamiento<Libro>::burbuja(libros,3, [](Libro a, Libro b){ if (a.getAn() < b.getAn()) return true; return false;  });
                if (tipo == 3) Ordenamiento<Libro>::burbuja(libros,3, [](Libro a, Libro b){ if (a.getEdicion() < b.getEdicion()) return true; return false;  });
        }

        imprime(libros);
        break;

        case 2:

            if (forma == 1){ Ordenamiento<Libro>::insercion(libros,3, [](Libro a, Libro b){ if (a.getTitulo() > b.getTitulo()) return true; return false;  });
                if (tipo == 2) Ordenamiento<Libro>::insercion(libros,3, [](Libro a, Libro b){ if (a.getAn() > b.getAn()) return true; return false;  });
                if (tipo == 3) Ordenamiento<Libro>::insercion(libros,3, [](Libro a, Libro b){ if (a.getEdicion() > b.getEdicion()) return true; return false;  });
            }
            else{
                if (tipo == 1) Ordenamiento<Libro>::insercion(libros,3, [](Libro a, Libro b){ if (a.getTitulo() < b.getTitulo()) return true; return false;  });
                if (tipo == 2) Ordenamiento<Libro>::insercion(libros,3, [](Libro a, Libro b){ if (a.getAn() < b.getAn()) return true; return false;  });
                if (tipo == 3) Ordenamiento<Libro>::insercion(libros,3, [](Libro a, Libro b){ if (a.getEdicion() < b.getEdicion()) return true; return false;  });
            }
        imprime(libros);
        break;

        case 3:
            if (forma == 1){
                if (tipo == 1) Ordenamiento<Libro>::seleccion(libros,3, [](Libro a, Libro b){ if (a.getTitulo() > b.getTitulo()) return true; return false;  });
                if (tipo == 2) Ordenamiento<Libro>::seleccion(libros,3, [](Libro a, Libro b){ if (a.getAn() > b.getAn()) return true; return false;  });
                if (tipo == 3) Ordenamiento<Libro>::seleccion(libros,3, [](Libro a, Libro b){ if (a.getEdicion() > b.getEdicion()) return true; return false;  });
            }
            else{
                if (tipo == 1) Ordenamiento<Libro>::seleccion(libros,3, [](Libro a, Libro b){ if (a.getTitulo() < b.getTitulo()) return true; return false;  });
                if (tipo == 2) Ordenamiento<Libro>::seleccion(libros,3, [](Libro a, Libro b){ if (a.getAn() < b.getAn()) return true; return false;  });
                if (tipo == 3) Ordenamiento<Libro>::seleccion(libros,3, [](Libro a, Libro b){ if (a.getEdicion() < b.getEdicion()) return true; return false;  });
        }
        imprime(libros);
        break;

        default:
            cout<<"Opcion invalida"<<endl;

    }





}



