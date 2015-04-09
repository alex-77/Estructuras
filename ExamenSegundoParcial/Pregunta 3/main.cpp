#include <iostream>
#include "Stack.h"
#include <string.h>
#include "LinkedList.h"
using namespace std;

#include <array>

int main() {
    int tam=0, i=0;
    using namespace vcn;
    LinkedList<int> * M = new LinkedList<int>();
	LinkedList<int> * N = new LinkedList<int>();
	LinkedList<int> * U = new LinkedList<int>();
	LinkedList<int> * I = new LinkedList<int>();


    string a="{3,1}*{4,1}";

    /*
    tam=a.size();
    for(int i=0;i<tam;i++){
           if(a[i]!=41){
            M->insert(a[i],i);

    }*/
    M->insertBack(3);
    M->insertBack(1);
    M->insertBack(6);

    N->insertBack(1);
    N->insertBack(3);
    N->insertBack(2);
  for(int i=0; i<M->size(); i++){
            int unio=0;
                   if(M->at(i)->getInfo()==N->at(i)->getInfo()&&N->at(i)->getInfo()==M->at(i)->getInfo()){
                   unio=M->at(i)->getInfo();
                   U->insert(unio, i);
                }
                else{
                unio= M->at(i)->getInfo();
                U->insert(unio, i);
                unio=N->at(i)->getInfo();
                U->insert(unio,i);
                }

        }
        //cout<<*U<<endl;
   for(int i=0; i<M->size(); i++){
            int unio=0;
                   if(M->at(i)->getInfo()==N->at(i)->getInfo()&&N->at(i)->getInfo()==M->at(i)->getInfo()){
                   unio=M->at(i)->getInfo();
                   I->insert(unio, i);
                }
        }



    /* Mostrar el contenido de la pila */
    cout<<*I<<endl;
    //cout << *M<<endl ;
    //cout << *N<<endl ;

    delete M;
    delete U;
    delete N;
    delete I;
    return 0;
}
