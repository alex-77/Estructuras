#include <iostream>
using namespace std;

void hanoi(int, int,int,int);

int main(){
    int num_discos=0;

    cout<<"entre numero de discos"<<endl;
    cin>>num_discos;

    if(num_discos < 1){

        cout<<"El numero de discos debe ser mayor que cero"<<endl;
        return 1;
    }
    hanoi(num_discos,1,3,2);
    return 0;
}

 void hanoi(int n,int x,int y,int z)
 {
     if(n==1){
        cout<< n<<": "<< x <<" --> "<< y<<endl;
     }
     else {
     hanoi(n-1,x,z,y);
     //mover los discos
     cout<< n<<": "<< x <<" --> "<< y<<endl;

     hanoi(n-1,z,y,x);
    }

}
