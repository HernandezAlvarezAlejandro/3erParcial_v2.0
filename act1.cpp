#include <iostream>
using namespace std;
int main() {
  int n;

  cout << "Ingrese el numero: ";
  cin >> n;

  if (n == 123) {
    cout << "Acceso permitido." << endl;
  } else {
    cout << "Acceso denegado." << endl;
  }

  return 0;
}