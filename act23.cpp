#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double n, p, res;

    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Ingresa la potencia: ";
    cin >> p;
    res = pow(n, p);
    cout << "El resultado de " << n << " elevado a la potencia " << p << " es: " << res << endl;

    return 0;
}
