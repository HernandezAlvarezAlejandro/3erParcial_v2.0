#include<iostream>
using namespace std;
int main (){
    int e,ent,nd,ad;
    ent=70;
    cout<<"dime tu edad: ";
    cin>>e;
    if(e<=5){
        cout<<"tiene un descuento de %60"<<endl;
        nd=e*0.60;
        cout<<"la entrada con el descuento seria: "<<nd<<endl;
    }
    if(e>=60){;
        cout<<"tiene un descuento de %55"<<endl;
        ad=ent*0.55;
        cout<<"la entrada con el descuento seria: " <<ad<<endl;
    }
    return 0;

}