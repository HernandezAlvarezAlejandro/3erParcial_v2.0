#include <iostream>
#include <conio.h>
using namespace std;

void displayMenu(int opc) {
    cout << "CALCULAR AREA DE FIGURAS" << endl;
    cout << (opc == 1 ? "->" : "  ") << " 1) Triangulo" << endl;
    cout << (opc == 2 ? "->" : "  ") << " 2) Trapecio" << endl;
    cout << (opc == 3 ? "->" : "  ") << " 3) Rectangulo" << endl;
}

void clearScreen() {
    system("cls");
}

int main() {
    int opc = 1;
    int ch;

    do {
        clearScreen();
        displayMenu(opc);

        ch = _getch();
        if (ch == 0 || ch == 224) {
            ch = _getch();
            switch (ch) {
                case 72: 
                    opc = (opc == 1) ? 3 : opc - 1;
                    break;
                case 80: 
                    opc = (opc == 3) ? 1 : opc + 1;
                    break;
            }
        }
    } while (ch != 13);  
    clearScreen();
    switch (opc) {
        case 1: {
            float base, altura, area;
            cout << "Dime la base del triangulo: ";
            cin >> base;
            cout << "Dime la altura del triangulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El area del triángulo es: " << area << endl;
            break;
        }
        case 2: {
            float baseMayor, baseMenor, altura, area;
            cout << "Dime la base mayor del trapecio: ";
            cin >> baseMayor;
            cout << "Dime la base menor del trapecio: ";
            cin >> baseMenor;
            cout << "Dime la altura del trapecio: ";
            cin >> altura;
            area = ((baseMayor + baseMenor) * altura) / 2;
            cout << "El area del trapecio es: " << area << endl;
            break;
        }
        case 3: {
            float base, altura, area;
            cout << "Dime la base del rectangulo: ";
            cin >> base;
            cout << "Dime la altura del rectangulo: ";
            cin >> altura;
            area = base * altura;
            cout << "El area del rectangulo es: " << area << endl;
            break;
        }
        default:
            cout << "Opción no válida" << endl;
    }
    cout << "Presiona alguna tecla para salir"<<endl;
    _getch();
    return 0;
}
