#include<iostream>
using namespace std;

int main()
{
    unsigned int a, b;
    cout<<"Introduceti primul numar."; cin>>a;
    cout<<"Introduceti al doilea numar."; cin>>b;
    if(a%b==0) cout<<"Primul numar este divizibil cu al doilea numar."<<endl;
    else cout<<"Primul numar nu este divizibil cu al doilea numar."<<endl;
    if(a==b-1 || a==b+1) cout<<"Numerele introduse sunt consecutive."<<endl;
    else cout<<"Numerele introduse nu sunt consecutive."<<endl;
    if(a%2==0) cout<<"Primul numar este par."<<endl;
    else cout<<"Primul numar este impar"<<endl;
    if(b%2==0) cout<<"Al doilea numar este par.";
    else cout<<"Al doilea numar este impar.";
    return 0;
}
