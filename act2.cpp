#include <iostream>
using namespace std;

int main()
{
    int numeros[5];
    
    cout << "Ingresa el primer numero: ";
    cin >> numeros[0];
    cout << "Ingresa el segundo numero: ";
    cin >> numeros[1];
    cout << "Ingresa el tercer numero: ";
    cin >> numeros[2];
    cout << "Ingresa el cuarto numero: ";
    cin >> numeros[3];
    cout << "Ingresa el quinto numero: ";
    cin >> numeros[4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    cout << "Los numeros en orden ascendente son: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}
