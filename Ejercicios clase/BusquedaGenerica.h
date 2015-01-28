template <typename T>
class BusquedaGenerica {
public:
    static bool busquedaSecuencial(T [], T , int );
    static bool busquedaBinaria(T[],T,int,int);
};

template <typename T>
bool BusquedaGenerica<T>::busquedaSecuencial(T v[], T valor, int longitud)
{
    bool existe = false;
    int indice = 0;

    if (longitud <= 0) return false;

    while (!existe && indice < longitud) {
        if (v[indice++] == valor) {
            existe = true;
        }
    }

    return existe;
}

bool BusquedaGenerica::busquedaBinaria(T v[],T valor,int superior,int inferior){
       if (inferior >= superior)
    {
        return -1;
    }
    else  {
        int mitad = (inferior + superior) / 2;

        if (v[mitad] == valor) {
            return mitad;
        }
        else if (valor < v[mitad])
            return busquedaBinaria(v, valor, inferior, mitad);
        else
            return busquedaBinaria(v, valor, mitad + 1, superior);
    }
}

}
