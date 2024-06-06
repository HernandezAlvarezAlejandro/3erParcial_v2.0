#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char nombre[20], contra[20];
    int intentos = 3;
    int av;
    float pu;
    
    do {
        cout<<"Ingrese su nombre de usuario: ";
        cin>>nombre;
        cout<<"Ingrese su contrasena: ";
        cin>>contra;
        
        if (strcmp(nombre, "alejandro") == 0 && strcmp(contra, "2b12") == 0) {
            cout<<"Bienvenido al sistema"<<endl;
            cout<<"Articulos vendidos: "<<endl;
            cout<<"Ingrese el numero 0 para acabar las ventas";
            cin>>av;

            while(av<0){
                cout<<"No se pueden ingresar numeros negativos, intentelo nuevamente"<<endl;
                cin>>av;
            }
            cout<<"Precio unitario: ";
            cin>>pu;
            while(pu<0){
                cout<<"No se pueden ingresar numeros negativos, intentelo nuevamente"<<endl;
                cin>>pu;
            }
            pu=pu*av;
            cout<<"total: " <<pu;
            break;
        } else {
            cout<<"Nombre de usuario o contrasena incorrectos"<<endl;
            intentos--;
            if (intentos == 0) {
                cout<<"Ha superado el numero de intentos permitidos"<<endl;
                break;
            } else {
                cout<<"Le quedan " <<intentos<< "intentos" <<endl;
            }
        }
    } while (intentos > 0);
    
    return 0;
}