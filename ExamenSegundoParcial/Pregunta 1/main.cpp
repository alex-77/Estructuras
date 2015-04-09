#include <iostream>
using namespace std;

void Binario( int a){
    if ( a != 0 ){
    cout<<a%2<<" ";

    Binario(a/2);

    }
}

int main(){

 int num;

 num=10;

 Binario(num);

 return 0;
}
