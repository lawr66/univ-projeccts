#include<iostream>
using namespace std;

int main()
{
    int x[50] , i, n, y;
    cout<<"Introduceti numarul de elemente al vectorului."; cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Introduceti elementul "<<i<<"."; cin>>x[i];
    }
    y=x[0];
    for(i=0; i<n; i++)
        x[i]=x[i+1];
    x[n-1]=y;
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";

    return 0;
}
