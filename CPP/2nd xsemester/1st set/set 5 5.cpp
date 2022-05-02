#include<iostream>
using namespace std;

int afisare()
{
    int x[100], n, i;
    cout<<"Introduceti cate elemente sunt in sir: "; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";
        cin>>x[i];
    }
    for(i=1; i<=n; i++)
    if(x[i]%2==0) cout<<x[i]<<" ";
    cout<<endl;
    for(i=1; i<=n; i++)
        if(x[i]%2!=0) cout<<x[i]<<" ";
}

int main()
{
    afisare();

    return 0;
}
