#include<iostream>
using namespace std;

int x[50], n, i, k;

int verificare(int x[50])
{
    k=0;
    for(i=2; i<=n; i++)
        if(x[i-1]>x[i]) k++;
    return k;
}

int main()
{
    cout<<"Introduceti numarul de elemente din vector."; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";
        cin>>x[i];
    }
    verificare(x);
    if(k==0)
        cout<<"Numerele sunt in ordine crescatoare.";
    else
        cout<<"Numerele nu sunt in ordine crescatoare.";
}
