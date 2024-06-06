#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numeros;
    int contador = 0;

    cout << "Ingresa los numeros enteros: " << endl;

    while (contador < 20) {
        int numero;
        cin >> numero;

        if (numero == 0) {
            break;
        }

        numeros.push_back(numero);
        contador++;
    }
    cout << "Numeros en orden inverso:" << endl;
    for (int i = numeros.size() - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}
