#ifndef BUSQUEDA_H
#define BUSQUEDA_H

#include <vector>

class Busqueda {
public:
    // Busca el dato recorriendo el vector. Regresa su indice o -1. Complejidad: O(n).
    static int busqSecuencial(const std::vector<int> &v, int dato);

    // Busca el dato en un vector ordenado. Regresa su indice o -1. Complejidad: O(log n).
    static int busqBinaria(const std::vector<int> &v, int dato);
};

#endif
