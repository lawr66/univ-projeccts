#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int l, a, p;
    float d;
    cout<<"Introduceti valoarea laturei patratului."; cin>>l;
    a=l*l;
    p=4*l;
    d=l*sqrt(2);
    cout<<"Aria patrautlui este: "<<a<<endl;
    cout<<"Perimetrul poatratului este: "<<p<<endl;
    cout<<"Diagonala patratului este: "<<d;
    return 0;
}
