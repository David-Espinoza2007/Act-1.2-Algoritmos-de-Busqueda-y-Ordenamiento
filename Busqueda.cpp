#include "Busqueda.h"

using namespace std;

int Busqueda::busqSecuencial(const vector<int> &v, int dato) {
    for (int i = 0; i < static_cast<int>(v.size()); i++) {
        if (v[i] == dato) {
            return i;
        }
    }
    return -1;
}

int Busqueda::busqBinaria(const vector<int> &v, int dato) {
    int izq = 0;
    int der = static_cast<int>(v.size()) - 1;
    while (izq <= der) {
        int medio = (izq + der) / 2;
        if (v[medio] == dato) {
            return medio;
        }
        if (v[medio] < dato) {
            izq = medio + 1;
        } else {
            der = medio - 1;
        }
    }
    return -1;
}
