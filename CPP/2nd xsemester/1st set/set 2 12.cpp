#include<iostream>
using namespace std;

int verificare_numere_pitagorice()
{
    int a, b, c;
    cout<<"Introduceti primul numar."; cin>>a;
    cout<<"Introduceti al doilea numar."; cin>>b;
    cout<<"Introduceti al treilea numar."; cin>>c;
    if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b)) cout<<"Numerele introduse sunt pitagorice.";
    else cout<<"Numerele introduse nu sunt pitagorice.";
}

int main()
{
    verificare_numere_pitagorice();

    return 0;
}
