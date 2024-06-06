#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char nombre[20], contra[20];
    int intentos = 3;
    int av;
    float pu;
    float totalVentas = 0.0;
    float totalVentasAcumuladas = 0.0;

    while (intentos > 0) {
        cout << "Ingrese su nombre de usuario: ";
        cin >> nombre;
        cout << "Ingrese su contrasena: ";
        cin >> contra;

        if (strcmp(nombre, "alejandro") == 0 && strcmp(contra, "2b12") == 0) {
            cout << "Bienvenido al sistema" << endl;

            while (true) {
                cout<<"Ingrese 0 para cerrar venta\n";
                cout<<"Ingrese 1 para imprimir ventas y salir\n";
                cout << "Articulos vendidos: ";
                cin >> av;

                if (av == 0) {
                    totalVentasAcumuladas += totalVentas;
                    cout << "Venta cerrada. Total de esta venta: " << totalVentas << endl;
                    totalVentas = 0.0;
                    cout << "Iniciando nueva venta..." << endl;
                    continue;
                } else if (av == 1) {
                    totalVentasAcumuladas += totalVentas;
                    cout << "Total de todas las ventas acumuladas: " << totalVentasAcumuladas << endl;
                    cout << "Programa finalizado." << endl;
                    return 0;
                } else if (av < 0) {
                    cout << "No se pueden ingresar numeros negativos, intentelo nuevamente" << endl;
                    continue;
                }

                cout << "Precio unitario: ";
                cin >> pu;

                if (pu < 0) {
                    cout << "No se pueden ingresar numeros negativos, intentelo nuevamente" << endl;
                    continue;
                }

                totalVentas += pu * av;
                cout << "Venta registrada. Total acumulado de esta venta: " << totalVentas << endl;
            }
        } else {
            cout << "Nombre de usuario o contrasena incorrectos" << endl;
            intentos--;
            if (intentos == 0) {
                cout << "Ha superado el numero de intentos permitidos" << endl;
            } else {
                cout << "Le quedan " << intentos << " intentos" << endl;
            }
        }
    }

    return 0;
}