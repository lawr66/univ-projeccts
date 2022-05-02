#include<iostream>
using namespace std;

int main()
{
    int a, b, c, p, max=-1;
    cout<<"Introduceti primul numar."; cin>>a;
    cout<<"Introduceti al doilea numar."; cin>>b;
    cout<<"Introduceti al treilea numar."; cin>>c;
    if(a>max) max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    p=(a+b+c)*max;
    cout<<"Maximul numerelor introduse este: "<<max<<endl;
    cout<<"Produsul dintre maximul si suma numerelor introduse este: "<<p;
    return 0;
}
