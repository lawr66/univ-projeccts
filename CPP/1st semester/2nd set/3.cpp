#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    unsigned n;
    float x;
    cout<<"Introduceti un numar natural."; cin>>n;
    x=round(pow(n*1.0,1.0/3));
    if(x*x*x==n) cout<<"Numarul introdus este cub perfect.";
    else cout<<"Numarul introdus nu este cub perfect.";
    return 0;
}
