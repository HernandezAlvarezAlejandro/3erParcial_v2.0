#include <iostream>
using namespace std;
int main() {
    const int c_n = 10;
    int numeros[c_n];
    int mayor, menor, s_t;
    s_t=0;
    for (int i = 0; i < c_n; ++i) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
        if (i == 0) {
            mayor = menor = numeros[i];
        } else {
            if (numeros[i] > mayor) {
                mayor = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
        s_t += numeros[i];
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "La suma total de los numeros es: " << s_t << endl;
    return 0;
}
