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
            y=x[i];
            j=i-1;
            while((j>=0)&& (y<x[j]))
                {
                    x[j+1]=x[j];
                    j--;
                }
            x[j+1]=y;
        }

    cout<<endl<<"Vectorul modificat: ";
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";
}
