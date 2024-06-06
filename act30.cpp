#include <iostream>
using namespace std;
int main() {
    int matriz[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Digite el valor para la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Los valores de la matriz son:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
