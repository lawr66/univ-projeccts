#include<iostream>
using namespace std;

int main()
{
    unsigned int n, i=2, prim=1;
    cout<<"Introduceti un numar natural. "; cin>>n;
    while(i<=n/2)
    {
        if(n%i==0) prim=0;
        i++;
    }
    if(prim==1) cout<<"Numarul introdus este prim.";
    else cout<<"Numarul introdus NU este prim.";

    return 0;
}
