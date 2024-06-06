#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    if (num2 == 0) {
        cout << "El divisor no puede ser cero" << endl;
        return 1;
    }
    int residuo = num1 % num2;
    cout << "El residuo de la division es: " << residuo << endl;
    if (residuo == 0) {
        cout << "El numero es divisible" << endl;
    }
    return 0;
}
