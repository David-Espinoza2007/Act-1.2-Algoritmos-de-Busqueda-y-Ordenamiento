#include "Ordenamiento.h"

using namespace std;

void Ordenamiento::ordenaIntercambio(vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[i]) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

void Ordenamiento::ordenaBurbuja(vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void Ordenamiento::ordenaMerge(vector<int> &v) {
    mergeSort(v, 0, static_cast<int>(v.size()) - 1);
}

void Ordenamiento::mergeSort(vector<int> &v, int izq, int der) {
    if (izq >= der) {
        return;
    }
    int medio = (izq + der) / 2;
    mergeSort(v, izq, medio);
    mergeSort(v, medio + 1, der);
    merge(v, izq, medio, der);
}

void Ordenamiento::merge(vector<int> &v, int izq, int medio, int der) {
    vector<int> aux;
    int i = izq;
    int j = medio + 1;
    while (i <= medio && j <= der) {
        if (v[i] <= v[j]) {
            aux.push_back(v[i++]);
        } else {
            aux.push_back(v[j++]);
        }
    }
    while (i <= medio) {
        aux.push_back(v[i++]);
    }
    while (j <= der) {
        aux.push_back(v[j++]);
    }
    for (int k = 0; k < static_cast<int>(aux.size()); k++) {
        v[izq + k] = aux[k];
    }
}
