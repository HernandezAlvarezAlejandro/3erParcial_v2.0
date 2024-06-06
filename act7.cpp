#include <iostream>
using namespace std;
int main()
{
    int opcion;
    float b,h;
    float bm,bme,hb;
    float lm,lme;
    float at,att,ar;
    cout<<"CALCULO DE AREAS"<<endl;
    cout<<"Ingresa alguna opcion\n";
    cout<<"1.Calcular el area de un triangulo"<<endl;
    cout<<"2.Calcular el area de un trapecio"<<endl;
    cout<<"3.Calcular el area de un rectangulo"<<endl;
    cin>>opcion;
    switch (opcion){
        case 1:
          cout<<"Ingresa la base del triangulo: ";
          cin>>b;
          cout<<"Ingresa la altura del triangulo: ";
          cin>>h;
          at=(b*h)/2;
          cout<<"a= "<<at <<endl;
          break;
        case 2:
          cout<<"Ingresa la base mayor del trapecio: ";
          cin>>bm;
          cout<<"Ingresa la base menor del trapecio: ";
          cin>>bme;
          cout<<"Ingresa la altura del traprecio: ";
          cin>>hb;
          att=(bm*bme*hb)/2;
          cout<<"a=" <<att <<endl;
          break;
        case 3:
          cout<<"Ingresa el lado menor del rectangulo: ";
          cin>>lm;
          cout<<"Ingresa el lado mayor del rectangulo: ";
          cin>>lme;
          ar=lm*lme;
          cout<<"a="<<ar <<endl;
          break;
    }
  return 0;
}