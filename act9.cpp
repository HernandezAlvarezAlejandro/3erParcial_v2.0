#include <iostream>
using namespace std;

int main()
{
    int li;

    cout << "Ingresa el numero limite: ";
    cin >> li;

    for (int i = 5; i <= li; i += 5) {
        cout << i << endl;
    }

    return 0;
}
