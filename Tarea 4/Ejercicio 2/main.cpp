#include <iostream>
#include "CircularLinkedList.h"
using namespace std;

int main() {
    int desde=0,hacia=0,tam=0;
    using namespace vcn;

    /* Demostrar el uso de la clase genérica CircularLinkedList<T> */

    /* Declaración de una lista de enteros */
    CircularLinkedList<int> * computadoras = new CircularLinkedList<int>();
    //numero de computadoras

    cin>>tam;
    /* Insertar nodos en la lista */
    for(int i=0; i<tam;i++){
        computadoras->LinkedList::insert(0,i);
    }
     /* Imprimir el contenido de la lista */
    std::cout << *computadoras << std::endl;
    cin>>desde>>hacia;

    do{

       if(desde<hacia){
             Node<int> * removenode = computadoras->remove(desde);

        if (removenode) {

            delete removenode;
        }
        computadoras->LinkedList::insert(1,desde);
       }
       else if (desde!=tam){
           Node<int> * removenode = computadoras->remove(desde);

        if (removenode) {
            delete removenode;
        }
        computadoras->LinkedList::insert(1,desde);
       }
       else if(desde=tam){
        desde=-1;

       }
        desde++;
    }while(desde!=hacia+1);




    /* Imprimir el contenido de la lista */
    std::cout << *computadoras << std::endl;

    /* Borrar toda la lista y liberar la memoria de todos los nodos */
    delete computadoras;

    return 0;
}
