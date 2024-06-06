#include <iostream>
using namespace std;
int main()
{
    {
    char c;
    cout<<"Ingresa la letra: ";
    cin>>c;
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
           cout<<"Es una vocal"<<endl;
           break;
        default:
            cout<<"No es una vocal"<<endl;
    }
    return 0;

}
}