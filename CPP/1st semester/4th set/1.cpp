#include<iostream>
using namespace std;

int main()
{
    int n, i, x[40], k=0;
    cout<<"Introduceti un numar natural."; cin>>n;
    i=n;
    while(i!=0)
    {
        i=i/10;
        k++;
    }
    for(i=k; i>=1; i--)
    {
        x[i]=n%10;
        n=n/10;
    }
    cout<<"Vectorul format din cifrele numarului introdus: ";
    for(i=1; i<=k; i++)
        cout<<x[i]<<" ";
}
