#include<iostream>
#include<string.h>
using namespace std;

int hexad(int num)
{
int res=0;
if(num>16)
{
    res=num%16;
    return hexad (res);


}
else
{

return res;
}

}

int main()
{
    cout<<hexad(8)<<endl;


return 0;
}
