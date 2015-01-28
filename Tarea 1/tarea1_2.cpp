#include <iostream>

using namespace std;

bool terminado=false;
int n;
int lab[100][100];

void inicio();

void imprime();

void laberinto(int ,int );

int main()
{
    inicio();
    laberinto(0,0);

    return 0;
}
void inicio(){
    cout << "dame el tamaño del laberinto" << endl;
    cin >> tam;
    cout << "ingrese el laberinto(0=libre,-1=pared)" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> lab[j][i];
        }
    }
}

void imprime(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << lab[j][i];
        }
        cout << endl;
    }
    cout << endl;
}

void laberinto(int x,int y){
    if(terminado) return;
    lab[x][y]=2;
    if(!((x==n-1)&&(y==n-1))){
        if((x+1<n)&&(lab[x+1][y]==0)){
            laberinto(x+1,y);
        }
        if((y+1<n)&&(lab[x][y+1]==0)){
            laberinto(x,y+1);

        }
        if((x-1>=0)&&(lab[x-1][y]==0)){
            laberinto(x-1,y);
        }
        if((y-1>=0)&&(lab[x][y-1]==0)){
            laberinto(x,y-1);
        }
    }else{
        imprime();
        terminado = true;
    }
    lab[x][y] = 0;
}
