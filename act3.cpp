#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3,ma,me,md;
    cout<<"Ingresa el primer numero: ";
    cin>>n1;
    cout<<"Ingresa el segundo numero: ";
    cin>>n2;
    cout<<"Ingresa el tercer numero: ";
    cin>>n3;
    ma = n1;
    if (n2 > ma)
    {
        ma =n2;
    }
    if (n3 >ma)
    {
        ma =n3;
    }
    me = n1;
    if (n2<me)
    {
        me=n2;
    }
    if (n3<me)
    {
        me=n3;
    }
    md = (n1 + n2 + n3) - ma - me;
    cout<<"Los numeros son: " << me << "" << md << "" << ma <<endl;
    return 0;


}


