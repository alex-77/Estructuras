#include <iostream>
#include "Stack.h"
#include <string.h>
using namespace std;
using namespace vcn;

template <class T> int lista(T a, T b){
    Stack <int> res;
              for(int i=0;i<size();i++){
                 if(a->at(i)->getInfo()==b->at(i)->getInfo()&&b->at(i)->getInfo()==a->at(i)->getInfo()){
                   res=a->at(i)->getInfo();
                 }
              }
return res;
}
int main() {





    return 0;
}
