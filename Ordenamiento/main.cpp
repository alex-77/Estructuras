#include <iostream>
#include "ordenamientoGenerico.h"
#include <algorithm>
#include <ostream>
#include<stdlib.h>
#include<time.h>

int genera()
{
    return rand() % 100;
}

int main() {

    const int n = 10;

    int enteros[n];

    /* Establecer la semilla del generador de números aleatorios */
    srand((unsigned int) time(nullptr));

    /* Inicializar el arreglo con números aleatorios */
    std::generate(enteros, enteros+n, genera);

    /* Mostrar números por pantalla */
    std::copy(enteros, enteros+n, std::ostream_iterator<int>(std::cout, " "));

    std::cout << std::endl;


    return 0;
}
