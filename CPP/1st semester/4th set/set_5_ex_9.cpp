#include<iostream>
using namespace std;

int main()
{
    int x[100], i, n, a, s=0;
    cout<<"Introduceti cate numere sunt in vector. "; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";
        cin>>x[i];
    }
    cout<<"Introduceti numarul a." ; cin>>a;
    cout<<"Vectorul introdus: ";
    for(i=1; i<=n; i++)
        cout<<x[i]<<" ";
    for(i=1; i<=n; i++)
        if(x[i]%a==0) s=s+x[i];
    cout<<endl<<"Suma numerelor din vector divizibile cu a este: "<<s;
}
