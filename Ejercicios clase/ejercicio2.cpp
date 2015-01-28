#include <iostream>
using namespace std;
int sumaVector(int*,int);

int main(){
    int n=3;
    int arreglo[] = {11,22,23,6};

    cout<<"Resultado de la suma: "<< sumaVector(arreglo,n)<<endl;
return 0;
}

int sumaVector(int arreglo[], int n){
    int r=0;

    if(n==0){
        r+= arreglo[0];
    }
    else{
        r=arreglo[n] + sumaVector(arreglo,n-1);

    }
    return r;
}

