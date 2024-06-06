#include <iostream>
using namespace std;
int main(){
    int acum=0;
    int t,i,num,vector[t];
    cout<<"Digite el tamaño del vector: ";
    cin>>t;
    vector[t];
    for (i=1 ; i=t ; ++i){
        cout<<"Digite un numero ";
        cin>>num;

        vector[i]=num;
        acum=acum+vector[i];

    }
    for (i=1 ; i=t ; ++i){
        cout<<"La suma de: "<<vector[i];
    }
    cout<<"Es: "<<acum <<endl;
    return 0;
}