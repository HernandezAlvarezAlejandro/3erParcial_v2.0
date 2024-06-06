#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char nombre[20], contra[20];
    int intentos = 3;
    
    do {
        cout<<"Ingrese su nombre de usuario: ";
        cin>>nombre;
        cout<<"Ingrese su contrasena: ";
        cin>>contra;
        
        if (strcmp(nombre, "root") == 0 && strcmp(contra, "1234") == 0) {
            cout<<"Bienvenido al sistema"<<endl ;
            break;
        } else {
            cout<<"Nombre de usuario o contrasea incorrectos"<<endl;
            intentos--;
            if (intentos == 0) {
                cout<<"Ha superado el numero de intentos permitidos" <<endl;
                break;
            } else {
                cout<<"Le quedan " <<intentos<< " intentos" <<endl;
            }
        }
    } while (intentos > 0);
    
    return 0;
}