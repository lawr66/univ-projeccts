#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float x[50];
    int i, n, k=0, j;
    cout<<"Introduceti numarul de elemente al vectorului."; cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Introduceti elementul "<<i<<".  ";
        cin>>x[i];
    }
    cout<<"Vectorul introdus: ";
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";
    for(i=n-1;i>0;i--)
        {
            n++;
            for(j=n-1;j>i;j--)
                x[j]=x[j-1];
            x[i]=sqrt(x[i+1]*x[i-1]);
        }
    cout<<endl<<"Vectorul modificat: ";
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";
}
