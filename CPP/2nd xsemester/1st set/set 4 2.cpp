#include<iostream>
using namespace std;

int m=0;

int numar(int n)
{
    while(n!=0)
    {
        if(n%2==0) m=m*10+n%10;
        n=n/10;
    }
    cout<<"Numarul construit din numarul introdus: "<<m;
}

int main()
{
    int n;
    cout<<"Introduceti un numar natural. "; cin>>n;
    numar(n);

    return 0;
}
