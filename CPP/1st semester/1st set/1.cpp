#include <iostream>
using namespace std;
int main()
{
    int a, b, s, p, c, rest;
    float ma, rezultat;
    cout<<"Introduceti primul numar."; cin>>a;
    cout<<"Introduceti al doilea numar."; cin>>b;
    s=a+b;
    ma=(a+b)/2.0;
    p=a*b;
    c=a/b;
    rest=a%b;
    rezultat=(float)a/b;
    cout<<"Suma celor doua numere este: "<<s<<endl;
    cout<<"Media aritmetica a celor doua numere este: "<<ma<<endl;
    cout<<"Produsul a celor doua numere este: "<<p<<endl;
    cout<<"Catul impartirii a celor doua numere este: "<<c<<endl;
    cout<<"Restul impartirii a celor doua numere este: "<<rest<<endl;
    cout<<"Rezultatul impartirii a celor doua numere este: "<<rezultat;
    return 0;
}
