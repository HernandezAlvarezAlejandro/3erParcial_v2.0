#include <iostream>
using namespace std;

int main() {
    int num[5];
    for (int i = 0; i < 5; i++) {
        cout << "Digite un numero para la posicion " << i << ": ";
        cin >> num[i]; 
    }

    for (int i = 0; i < 5; i++) {
        cout << "El dato en la posicion " << i << " es: " << num[i] << endl;
    }

    return 0;
}