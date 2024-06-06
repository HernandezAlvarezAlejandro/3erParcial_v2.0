#include <iostream>
using namespace std;
int main(){
    int n,i,numero;
    int num[i];
    cout<<"Digite el tamano del arreglo: ";
    cin>>n;
    num[n];
    for (i=1 ; n ; ++i){
        cout<<"Digite un numero para la posicion "<<i <<endl;
        cin>>numero;
        num[i]=numero;
    }
    for (i=1 ; n ; ++i){
        cout<<"El dato es la posicion "<<i <<" es: "<<num[i] <<endl;
    }
    return 0;
}