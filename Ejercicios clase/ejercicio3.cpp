#include <iostream>
using namespace std;

int n=6;
int m=5;
int matriz[100][100];

int suma(int f,int c){
if(f==n)
    return 0;
else
{
    if(c==m)
        return matriz[f][c]+suma((f+1),0);
    else
        return matriz[f][c]+suma(f,(c+1));
}

}

int main(){


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matriz[i][j] = 1;
        }
    }

    cout << "La suma de los elementos de la matriz es = " << suma(n,m);


    return 0;
}

