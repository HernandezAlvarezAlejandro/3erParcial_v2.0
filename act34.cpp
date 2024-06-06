#include <iostream>
#include <string>
using namespace std;
int main() {
    string arreglo1[2];
    int arreglo2[3];
    arreglo1[0] = "Fernando";
    arreglo1[1] = "Oscar";
    arreglo2[0] = 74;
    arreglo2[1] = 56;
    arreglo2[2] = 10;
    cout << "Arreglo 1:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "El dato en la posición " << i << " es: " << arreglo1[i] << endl;
    }
    cout << "Arreglo 2:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "El dato en la posición " << i << " es: " << arreglo2[i] << endl;
    }

    return 0;
}
