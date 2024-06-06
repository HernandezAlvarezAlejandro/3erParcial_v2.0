#include <iostream>
using namespace std;
int main() {
    int filas, columnas;
    cout << "Digite el número de filas: ";
    cin >> filas;
    cout << "Digite el número de columnas: ";
    cin >> columnas;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Digite dato para la fila " << i << " columna " << j << ": ";
            cin >> matriz[i][j];
        }
    }
    cout << "Los datos que hay en la matriz son:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}