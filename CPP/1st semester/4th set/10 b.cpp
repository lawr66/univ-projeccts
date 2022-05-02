#include<iostream>
using namespace std;

int main()
{
    int x[50] , i, n, y, z;
    cout<<"Introduceti numarul de elemente al vectorului."; cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Introduceti elementul "<<i<<"."; cin>>x[i];
    }
    y=x[0];
    x[0]=x[n-1];
    for(i=1; i<n; i++)
        {
            z=x[i];
            x[i]=y;
            y=z;
        }

    for(i=0; i<n; i++)
        cout<<x[i]<<" ";

    return 0;
}
