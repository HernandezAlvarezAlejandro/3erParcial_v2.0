#include <iostream>
using namespace std;
int main(){
    int nombre=0,n=0,i;
    cout<<"Digite el numero de posiciones: ";
    cin>>n;
    int personas[n];
    for (i=0 ; i<n ; ++i){
        cout<<"Digiten un nombre para la posicion: "<<i <<endl;
        cin>>nombre;
        personas[i]=nombre;
    }
    for (i=0 ; n<1 ; ++i){
        cout<<"El dato en lá posicion: "<<i <<"es: "<< personas[i] <<endl;
    }
    return 0;
}