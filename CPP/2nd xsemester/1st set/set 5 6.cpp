#include<iostream>
using namespace std;

int n, v[100], i, d;

int divizibile()
{
    cout<<"Introduceti numarul d."; cin>>d;
    cout<<"Numerele din vector divizibile cu "<<d<<" sunt: ";

    for(i=1; i<=n; i++)
        if(v[i]%d==0) cout<<v[i]<<" ";
}

int main()
{
    cout<<"Introduceti numarul de elemente din vector."; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";cin>>v[i];
    }

    divizibile();

    return 0;
}
