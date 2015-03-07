#include <iostream>
#include "LinkedList.h"
#include "Persona.h"
#include "OrdenamientoGenerico.h"

using namespace std;
using namespace vcn;
int main()
{
	LinkedList<Persona> * lista = new LinkedList<Persona>();
	Persona p1("Miguel",19,"03/04/95");
	Persona p2("Juan", 20,"03/07/94");


    lista->insertFront(p1);
    lista->insertFront(p2);
	cout << *lista;

    lista->remove(1);

	cout<<*lista<<endl;



	cout<<lista<<endl;
	delete lista;

	return 0;
}
