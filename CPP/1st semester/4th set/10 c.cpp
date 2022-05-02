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
    for(i=0; i<n; i++)
        {
            if(i%2==0)
            {
                y=x[i];
                x[i]=x[i+1];
            }
            else x[i]=y;
        }
    if(x[n-1]==0) x[n-1]=n;

    for(i=0; i<n; i++)
        cout<<x[i]<<" ";

    return 0;
}
