#include<iostream>
using namespace std;

int x[100], i, n;

int suma(int x[100])
{
    int a, s=0;
    cout<<"Introduceti numarul a. " ; cin>>a;
    for(i=1; i<=n; i++)
        if(x[i]%a==0) s=s+x[i];
    cout<<"Suma numerelor din vector divizibile cu a este: "<<s;
}

int main()
{
    cout<<"Introduceti cate numere sunt in vector. "; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";
        cin>>x[i];
    }
    cout<<"Vectorul introdus: ";
    for(i=1; i<=n; i++)
        cout<<x[i]<<" ";
    cout<<endl;
    suma(x);

    return 0;
}
