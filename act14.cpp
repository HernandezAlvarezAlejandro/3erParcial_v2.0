#include <iostream>
using namespace std;

int main() {
    int n, n2;
    cout << "Ingresa el primer numero: ";
    cin >> n;
    cout << "Ingresa el segundo numero: ";
    cin >> n2;
    if (n > n2) {
        cout << "El primer numero (" << n << ") es mayor que el segundo numero (" << n2 << ")" << endl;
    } else if (n < n2) {
        cout << "El primer numero (" << n << ") es menor que el segundo numero (" << n2 << ")" << endl;
    } else {
        cout << "Ambos numeros son iguales" << endl;
    }
    return 0;
}
