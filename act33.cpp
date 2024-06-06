#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> leerNumeros(){
    vector<int> ns;
    int cont = 0;
    cout<<"Ingrese los numeros enteros: ";
    while (cont < 20){
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        ns.push_back(n);
        cont++;
    }
    reverse(ns.begin(),ns.end());
    return ns;
}
int main (){
    vector<int> vectorInverso = leerNumeros();
    for (int num : vectorInverso){
        cout<<num<<""<<endl;
    }
    cout<<endl;
    return 0;
}