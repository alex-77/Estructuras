#include <iostream>

using namespace std;

int robot(int ,int ,int ,int );
int main(){
    int n,m;
    cout << "Dame el valor de 'X'" << endl;
    cin >> n;
    cout << "Dame el valor de 'Y'" << endl;
    cin >> m;
    cout << "Numero de caminos: "<<robot(0,0,n,m);
    return 0;
}
int robot(int x,int y,int n,int m){
    if((x==n-1)&&(y==m-1)){
        return 1;
    }else{
        int sum=0;
        if(x<n-3){
            sum += robot(x+3,y,n,m);
        }
        if(y<m-2){
            sum += robot(x,y+2,n,m);
        }
        return sum;
    }
}

