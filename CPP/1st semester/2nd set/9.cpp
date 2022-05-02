#include<iostream>
using namespace std;

int main()
{
    float a, b, p;
    cout<<"Introduceti primul numar."; cin>>a;
    cout<<"Introduceti al doilea numar."; cin>>b;
    if(a==0 || b==0) cout<<"Produsul este 0.";
    else
    {
        p=a*b;
        if(p>0) cout<<"Produsul numerelor introduse este: "<<p;
        else cout<<"Produsul, in modul, numerelor introduse este: "<<p*-1;
    }
    return 0;
}
