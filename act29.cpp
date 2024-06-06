#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nombre[20], contra[20];
    int intentos = 3;
    int av;
    float pu, sum = 0.0;
    
    do {
        cout << "Ingrese su nombre de usuario: ";
        cin >> nombre;
        cout << "Ingrese su contrasena: ";
        cin >> contra;

        if (strcmp(nombre, "alejandro") == 0 && strcmp(contra, "2b12") == 0) {
            cout << "Bienvenido al sistema." << endl;
            do {
                cout << "Articulos vendidos: ";
                cin >> av;
                while (av < 0) {
                    cout << "No se pueden ingresar numeros negativos, intentelo nuevamente" << endl;
                    cin >> av;
                }
                if (av!= 0) {
                    cin >> pu;
                    while (pu < 0) {
                        cout << "No se pueden ingresar numeros negativos, intentelo nuevamente" << endl;
                        cin >> pu;
                    }
                    sum += pu * av;
                }
            } while (av != 0);

            cout << "Total: " << sum << endl;
            break;
        } else {
            cout << "Nombre de usuario o contrasena incorrectos." << endl;
            intentos--;
            if (intentos == 0) {
                cout << "Ha superado el numero de intentos permitidos." << endl;
                break;
            } else {
                cout << "Le quedan " << intentos << " intentos." << endl;
            }
        }
    } while (intentos > 0);
    
    return 0;
}
