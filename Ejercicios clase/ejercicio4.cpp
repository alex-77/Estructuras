#include <iostream>
using namespace std;
int sumaDigitos(int);

int main()
{
    int numero;

    cout << "Entre el número entero: ";
    cin >> numero;

    cout << "La suma de los dígitos es = " << sumaDigitos(numero);
    cout << std::endl;

    return 0;
}

int sumaDigitos(int n)
{
    int resto = n % 10;
    n = n / 10;

    if (n == 0) {
        return resto;
    }
    else {
        return resto + sumaDigitos(n);
    }
}
