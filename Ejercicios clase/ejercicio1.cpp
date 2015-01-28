#include <iostream>
using namespace std;
int mcd(int,int);


int main(){
    int m, n;
    cout<<"Numero 1: "<<endl;
    cin>>m;
    cout<<"Numero 2: "<<endl;
    cin >>n;



    cout<<"Mcd ("<<m<<", "<<n<<") = "<<mcd(m,n);


return 0;

}
int mcd(int m,int n){
    int r;
    r=m%n;

    if(r==0){
        return r;
    }
    else{
        return mcd(n,r);
    }
}
