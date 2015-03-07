#include<iostream>
#include"LinkedList.h"
#include <math.h>

using namespace std;
using namespace vcn;
int esPrimo(int n)
{
		int rq ,i;
		rq = (int) sqrt (n);
		for ( i = 2; i <= rq; i++)
		 {
			if (fmod(n,i) == 0)
				return 0;
		}
		return n;
}
int main(){
    int n,p,q;
    LinkedList<int> * listaEnlazada = new LinkedList<int>();
    cin>>n>>p>>q;

    for (int i=p;i<n;i++){
        if (esPrimo(i)!=0) {
            listaEnlazada->insertBack(i);

        }
    }

	cout<<*listaEnlazada<<endl;

   /*for(int i=q;i>=p;i--){
        int num=listaEnlazada->at(i)->getInfo();
      cout<<num<<endl;
    }
*/
delete listaEnlazada;
return 0;
}
