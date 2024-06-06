#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa algun numero: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "As";
            break;
        case 10:
            cout << "Sota";
            break;
        case 11:
            cout << "Caballo";
            break;
        case 12:
            cout << "Rey";
            break;
        default:
            if (num >= 2 && num <= 9) {
                cout << "No es ninguna figura ni tampoco As";
            } else {
                cout << "Este no es un numero de una carta de la baraja española" << endl;
            }
            break;
    }

    return 0;
}
