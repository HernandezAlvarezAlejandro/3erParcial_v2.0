#include <iostream>
using namespace std;
int main() {

    cout << "Digite el tamaño del arreglo: ";
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++) {
        cout << "Digite un número para la posición " << i + 1 << ": ";
        int numero;
        cin >> numero;

        num[i] = numero;
    }
    for (int i = 0; i < n; i++) {
        cout << "El dato en la posición " << i + 1 << " es: " << num[i] << endl;
    }
    return 0;
}
