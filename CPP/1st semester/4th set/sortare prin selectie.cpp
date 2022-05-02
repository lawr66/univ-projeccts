#include<iostream>
using namespace std;

int main()
{
    int x[50], i, n, y, maxim, j;
    cout<<"Introduceti numarul de elemente din vector. "; cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Introduceti elementul "<<i<<". ";
        cin>>x[i];
    }
    cout<<"Vectorul introdus: ";
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";

    for(i=0; i<n; i++)
    {
        maxim=i;
        for(j=i; j<n; j++)
            if(x[j]>x[maxim]) maxim=j;
        y=x[i];
        x[i]=x[maxim];
        x[maxim]=y;
    }
    cout<<endl<<"Vectorul modificat: ";
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";
}
