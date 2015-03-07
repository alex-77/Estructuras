#include <iostream>
#include "LinkedList.h"

using namespace std;
using namespace vcn;

int main()
{
	int tamN,tamM;

	int n, m;
	LinkedList<int> * M = new LinkedList<int>();
	LinkedList<int> * N = new LinkedList<int>();
	LinkedList<int> * P = new LinkedList<int>();

	cout << "Dame el total de numeros de la lista N" << endl;
	cin >> tamN;

	for (int i = 0; i < tamN; i++){
		cout << "Dame el " << (i + 1) << " numero de n" << endl;
		cin >> n;
		N->insertBack(n);
	}

	cout << "Dame el total de numeros de la lista M" << endl;
	cin >> tamM;

	for (int i = 0; i < tamM; i++){
		cout << "Dame el " << (i + 1) << " numero de m" << endl;
		cin >> m;
		M->insertBack(m);
	}

	int opcion=0;
	cout << endl << "Lita N:" << endl;
	cout << *N;
	cout << endl << "Lita M:" << endl;
	cout << *M;
	cout<<"1)N U M"<<endl;
	cout<<"2)N - M"<<endl;
	cout<<"3)M - N"<<endl;
	cout<<"4)N * M"<<endl;
	cout<<"5)N interseccion M"<<endl;
    cin>>opcion;

	switch( opcion)
    {
    case 1:
        for(int i=0; i<tamM; i++){
            int unio=0;
                   if(M->at(i)->getInfo()==N->at(i)->getInfo()&&N->at(i)->getInfo()==M->at(i)->getInfo()){
                   unio=M->at(i)->getInfo();
                   P->insert(unio, i);
                }
                else{
                unio= M->at(i)->getInfo();
                P->insert(unio, i);
                unio=N->at(i)->getInfo();
                P->insert(unio,i);
                }

        }

    break;

    case 2:
        for(int i=0; i<tamM; i++){
            int aux=0;
                   if(N->at(i)->getInfo()!=M->at(i)->getInfo()&&M->at(i)->getInfo()!=N->at(i)->getInfo())
                   aux=N->at(i)->getInfo();
                   P->insert(aux, i);
                }


    break;

    case 3:
        for(int i=0; i<tamM; i++){
            int aux=0;
                   if(M->at(i)->getInfo()!=N->at(i)->getInfo()&&N->at(i)->getInfo()!=M->at(i)->getInfo())
                   aux=N->at(i)->getInfo();
                   P->insert(aux, i);
                }


    break;
    case 4:
        for(int i=0; i<tamM; i++){
                int producto=0;
            for(int j=0; j<tamN; j++){

                producto= N->at(i)->getInfo() * M->at(j)->getInfo();
                P->insert(producto, i);
            }

        }



    break;
    case 5:
        for(int i=0; i<tamM; i++){
            int unio=0;
                   if(M->at(i)->getInfo()==N->at(i)->getInfo()&&N->at(i)->getInfo()==M->at(i)->getInfo()){
                   unio=M->at(i)->getInfo();
                   P->insert(unio, i);
                }
        }

    break;

    default: cout<<"opcion Invalida" <<endl;

    };
    cout << endl << "Lita P:" << endl;
    cout << *P;




    delete M;
    delete N;
    delete P;
	return 0;
}
