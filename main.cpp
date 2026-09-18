#include <iostream>
#include <vector>

#include "Busqueda.h"
#include "Ordenamiento.h"

using namespace std;

void imprime(const vector<int> &v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Cuantos numeros: ";
    cin >> n;

    vector<int> numeros(n);
    cout << "Numeros: ";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    vector<int> intercambio = numeros;
    vector<int> burbuja = numeros;
    vector<int> merge = numeros;
    Ordenamiento::ordenaIntercambio(intercambio);
    Ordenamiento::ordenaBurbuja(burbuja);
    Ordenamiento::ordenaMerge(merge);

    cout << "Intercambio: ";
    imprime(intercambio);
    cout << "Burbuja: ";
    imprime(burbuja);
    cout << "Merge: ";
    imprime(merge);

    int busquedas;
    cout << "Cuantas busquedas: ";
    cin >> busquedas;

    for (int i = 0; i < busquedas; i++) {
        int dato;
        cout << "Numero a buscar: ";
        cin >> dato;
        cout << "Secuencial: " << Busqueda::busqSecuencial(merge, dato) << endl;
        cout << "Binaria: " << Busqueda::busqBinaria(merge, dato) << endl;
    }

    return 0;
}
