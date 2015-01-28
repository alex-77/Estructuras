#include"BusquedaGenerica.h"
#include <iostream>
#include<cstdlib>
template<typename T>
void imprimeArreglo(T[], int);

int main(){
	const int tam = 10;
	int enteros[tam];
	int valor;


	for (int i = 0; i < tam; i++){
		enteros[i] = rand() % 100;
	}
	imprimeArreglo<int>(enteros, tam);

	std::cout << "Entre el elemento a buscar: ";
	std::cin >> valor;

	bool existe= BusquedaGenerica<int>::busquedaSecuencial(enteros,valor,tam);
	if (existe){
		std::cout << "El valor si existe en el arreglo" << std::endl;
	}
	else{
		std::cout << "El valor no existe en el arreglo"<<std::endl;
	}

	return 0;
}
template<typename T>
void imprimeArreglo(T a[], int tam){

	for (int i = 0; i < tam; i++){
		std::cout << a[i]<<" ";
	}
	std::cout << std::endl;
}
