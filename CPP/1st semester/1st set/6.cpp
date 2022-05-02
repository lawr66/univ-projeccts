#include<iostream>
using namespace std;

int main()
{
    int x, y, a, p;
    cout<<"Introduceti lungimea dreptunghiului."; cin>>x;
    cout<<"Introduceti latimea dreptunghiului."; cin>>y;
    a=x*y;
    p=2*(x+y);
    cout<<"Aria dreptunghiului este: "<<a<<endl;
    cout<<"Perimetrul dreptunghiului este: "<<p;
    return 0;
}
