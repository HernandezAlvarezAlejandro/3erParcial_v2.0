#include <iostream>
using namespace std;
double elevarAPotencia(double base, int exponente) {

    if (exponente == 0) {
        return 1;
    }
    double resultado = 1.0;
    int exp = (exponente < 0) ? -exponente : exponente;
    double base_actual = (exponente < 0) ? 1 / base : base;
    for (int i = 0; i < exp; ++i) {
        resultado *= base_actual;
    }

    return resultado;
}

int main() {
    double base;
    int exponente;
    cout << "Ingrese el numero: ";
    cin >> base;
    cout << "Ingrese la potencia: ";
    cin >> exponente;
    cout << base << " elevado a la potencia " << exponente << " es " << elevarAPotencia(base, exponente) << endl;

    return 0;
}

