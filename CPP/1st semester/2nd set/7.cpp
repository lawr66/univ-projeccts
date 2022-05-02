#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, x;
    cout<<"Introduceti un numar."; cin>>n;
    x=sqrt(n);
    if(x*x==n) cout<<"Numarul introdus este patrat perfect.";
    else cout<<"Numarul introdus nu este patrat perfect.";
    return 0;
}
