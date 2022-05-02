#include<iostream>
using namespace std;

int main()
{
    int x[50], y[50], k[50], i, a, n, j;
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
        k[i]=0;
    for(i=1; i<n; i++)
        for(j=0; j<=i-1; j++)
            if(x[j]>x[i]) k[i]++;
            else k[j]++;
    for(i=0; i<n; i++)
        y[k[i]]=x[i];
    cout<<endl<<"Vectorul sortat: ";
    for(i=0; i<n; i++)
        cout<<y[i]<<" ";
}
