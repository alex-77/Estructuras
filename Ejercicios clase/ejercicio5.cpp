#include <iostream>
using namespace std;

int invierteNumero(int, int);

int main(int argc, const char * argv[])
{
    int numero;

    cout << "Entre el numero entero: ";
    cin >> numero;

    cout << "El numero invertido es = " << invierteNumero(numero, 0);
    cout << std::endl;

    return 0;
}

int invierteNumero(int n, int nuevo)
{
    int resto = n % 10;
    n = n / 10;

    if (n == 0) {
        return resto + nuevo;
    }
    else {
        return invierteNumero(n, (nuevo + resto) * 10) ;
    }

}
