#include <iostream>
using namespace std;
int main() {
    int f, c, numero;
    int acum = 0;
    cout << "Digite el numero de filas: ";
    cin >> f;
    cout << "Digite el numero de columnas: ";
    cin >> c;
    int matriz[f][c];
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Digite dato para la fila " << i << " columna " << j << ": ";
            cin >> numero;
            matriz[i][j] = numero;
        }
    }
    cout << "Los datos que hay en la matriz son:" << endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < f; ++i) {
        acum += matriz[i][0];
    }
    cout << "Todos los elementos de la columna 1, suman un total de: " << acum << endl;

    return 0;
}
