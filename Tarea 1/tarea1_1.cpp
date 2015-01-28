#include <iostream>

using namespace std;
int resolverMatriz(int,int,int);
int llena(int );


int main()
{
    int numero;
    cout << "Dame el tamaño de la matriz n: " << endl;
    cin >> numero;
    resolverMatriz(0,0,numero);
    return 0;
}

int llena(int num){
    int temp=1;
    for(int i=0;i<num;i++){
        temp*=2;
    }
    cout << temp << " ";
}

int resolverMatriz(int fila,int col,int n){
    if(col<n){
        if(fila<col){
            llena(fila);
        }else{
            llena(col);
        }
        if(fila<n-1){
            resolverMatriz(fila+1,col,n);
        }else{
            cout << endl;
            resolverMatriz(0,col+1,n);
        }
    }
}
