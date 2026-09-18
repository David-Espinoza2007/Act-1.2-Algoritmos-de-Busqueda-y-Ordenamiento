#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

#include <vector>

class Ordenamiento {
public:
    // Ordena el vector en forma ascendente por Intercambio. Complejidad: O(n^2).
    static void ordenaIntercambio(std::vector<int> &v);

    // Ordena el vector en forma ascendente por Burbuja. Complejidad: O(n^2).
    static void ordenaBurbuja(std::vector<int> &v);

    // Ordena el vector en forma ascendente por Merge. Complejidad: O(n log n).
    static void ordenaMerge(std::vector<int> &v);

private:
    // Ordena el rango [izq, der]. Complejidad: O(n log n).
    static void mergeSort(std::vector<int> &v, int izq, int der);

    // Mezcla [izq, medio] y [medio + 1, der] ya ordenados. Complejidad: O(n).
    static void merge(std::vector<int> &v, int izq, int medio, int der);
};

#endif
