#include <iostream>
using namespace std;

int main()
{
    int h;
    do {
        cout << "Ingrese la hora actual: ";
        cin >> h;
        if (h >= 25) {
            cout << "Formato de hora no valido" << endl;
        }
    } while (h >= 25);

    if (h >= 1 && h <= 11) {
        cout << "Buenos dias";
    } else if (h >= 12 && h <= 18) {
        cout << "Buenas tardes";
    } else if (h >= 19 && h <= 24) {
        cout << "Buenas noches";
    } else {
        cout << "Formato de hora no valido" << endl;
    }

    return 0;
}
