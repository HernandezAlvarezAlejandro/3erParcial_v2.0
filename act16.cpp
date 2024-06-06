#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4, n5, m;
    
    cout << "Ingresa el primer numero: ";
    cin >> n1;
    cout << "Ingresa el segundo numero: ";
    cin >> n2;
    cout << "Ingresa el tercero numero: ";
    cin >> n3;
    cout << "Ingresa el cuarto numero: ";
    cin >> n4;
    cout << "Ingresa el quinto numero: ";
    cin >> n5;
    
    m = n1;
    if (n2 < m)
    {
        m = n2;
    }
    if (n3 < m)
    {
        m = n3;
    }
    if (n4 < m)
    {
        m = n4;
    }
    if (n5 < m)
    {
        m = n5;
    }

    cout << "El numero menor es: " << m << endl;
    return 0;
}