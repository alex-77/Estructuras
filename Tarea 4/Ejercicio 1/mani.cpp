#include <iostream>
#include "Stack.h"
#include <string.h>
using namespace std;
#include <array>

int main(int argc, const char * argv[]) {
    int par1=0,par2=0,tam=0;

    /* Usar el namespace */
    using namespace vcn;

    /* Definir una pila */
    Stack<int> * pila = new Stack<int>();
    string a="(((5)*(3) + 8)/(2)))";
    string temp="";
    /* Insertar elementos en la pila */
    /*hacer un if para ver si es ( otro si es ) y otro para cualquier otra cosa)*/
    tam=a.size();
    for(int i=0;i<tam;i++){
            if(a[i]==40){
                    pila->push(a[i]);
                    temp="Esta balanceada";
            }
            else if(a[i]==41){
                if(pila->size()!=0){
                    pila->pop();

                }
                else {
                        temp="No esta balanceada";

                }

            }
    }


    /* Mostrar el contenido de la pila */
    cout<<temp<<endl;
    std::cout << *pila << std::endl;

    /* Eliminar la pila */
    delete pila;

    return 0;
}
