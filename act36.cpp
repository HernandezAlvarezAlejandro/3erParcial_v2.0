#include <iostream>
using namespace std;

int main() {
    int acum = 0, acum2 = 0;
    int t, i, num;
    cout << "Digite el tamano del vector 1" << endl;
    cin >> t;
    int vector1[t];
    for (i = 0; i < t; ++i) { 
        cout << "Digite un numero " << i << endl;
        cin >> num;
        vector1[i] = num;
        acum += vector1[i];
    }
    cout << "Digite el tamano del vector 2" << endl;
    cin >> t;

    int vector2[t];
    for (i = 0; i < t; ++i) {
        cout << "Digite un numero " << i << endl;
        cin >> num;
        vector2[i] = num;
        acum2 += vector2[i];
    }
    int vector3[1];
    vector3[0] = acum + acum2; 
    cout << "Resultado total <- " << vector3[0] << endl;

    return 0;
}
