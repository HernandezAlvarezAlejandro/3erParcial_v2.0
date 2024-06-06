#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "El numero " << n<< " es par" << endl;
    } else {
        cout << "El numero " << n << " es impar" << endl;
    }
    if (n % 3 == 0) {
        cout << "El numero " << n<< " es divisible entre 3" << endl;
    } else {
        cout << "El numero " << n << " no es divisible entre 3" << endl;
    }
    return 0;
}
