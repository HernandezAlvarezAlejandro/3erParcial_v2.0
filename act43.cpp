#include <iostream>
#include <limits>
using namespace std;
const int f = 4;
const int c = 3;

int main() {
    int tabla[f][c];
    cout << "Introduce los valores de la tabla (" << f << " filas por " << c << " columnas):\n";
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": ";
            cin >> tabla[i][j];
        }
    }
    int suma_maxima = numeric_limits<int>::min();
    for (int j = 0; j < c; j++) {
        int suma_columna = 0;
        for (int i = 0; i < f; i++) {
            suma_columna += tabla[i][j];
        }
        if (suma_columna > suma_maxima) {
            suma_maxima = suma_columna;
        }
    cout << "La mayor suma de columnas es: " << suma_maxima << endl;
    
    return 0;
}

    }
