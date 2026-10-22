#include <iostream>
using namespace std;

int contarPares(int *vector, int n) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        if (*(vector + i) % 2 == 0) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int vector[100];

    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        cin >> vector[i];
    }

    int pares = contarPares(vector, n);

    cout << "Cantidad de numeros pares: " << pares << endl;

    return 0;
}