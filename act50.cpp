#include <iostream>
#define FILAS 4
#define COLUMNAS 3
using namespace std;

int main() {
    int tabla[FILAS][COLUMNAS];
    int suma_columnas[COLUMNAS];
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            cout << "Introduce un valor para la fila " << fila + 1 << ", columna " << columna + 1 << ": ";
            cin >> tabla[fila][columna];
        }
    }
    for (int columna = 0; columna < COLUMNAS; columna++) {
        suma_columnas[columna] = 0;
        for (int fila = 0; fila < FILAS; fila++) {
            suma_columnas[columna] += tabla[fila][columna];
        }
    }
    int mayor_suma = suma_columnas[0];
    for (int columna = 1; columna < COLUMNAS; columna++) {
        if (suma_columnas[columna] > mayor_suma) {
            mayor_suma = suma_columnas[columna];
        }
    }
    cout << "La mayor suma de columna es: " << mayor_suma << endl;
    return 0;
}
