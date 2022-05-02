#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Introduceti primul numar."; cin>>a;
    cout<<"Introduceti al doilea numar."; cin>>b;
    cout<<"Introduceti al treilea numar."; cin>>c;
    if(a%2==0) cout<<a<<" | PAR"<<endl;
    else cout<<a<<" | IMPAR"<<endl;
    if(b%2==0) cout<<b<<" | PAR"<<endl;
    else cout<<b<<" | IMPAR"<<endl;
    if(c%2==0) cout<<c<<" | PAR";
    else cout<<c<<" | IMPAR";
    return 0;
}
