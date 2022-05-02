#include <iostream>

    using namespace std;

    int main()
    {
    int a[20], b[20], c[20], i, j, m, n, k, gasit;

    cout<<"A="; cin>>n;

    for(i=0; i<=n-1; i++)
    {
    cout<<endl<<"a["<<i<<"]="; cin>>a[i];
    }
    cout<<endl<<"B="; cin>>m;

    for(i=0; i<=m-1; i++)
    {
    cout<<endl<<"b["<<i<<"]="; cin>>b[i];
    }
    k=0;

    for(i=0; i<=n-1; i++)
    {
    gasit=0;
    for(j=0; j<=m-1 && !gasit; j++)
        if(a[i]==b[j])
        gasit=1;
        if(!gasit)
        c[k++]=a[i];
    }
    cout<<endl<<"Diferenta A si B"<<endl;
    for(i=0; i<k; i++)
        cout<<c[i]<<" ";
    k=0;
    for(j=0; j<=m-1; j++)
    {
    gasit=0;
    for(i=0; i<=n-1 && !gasit; i++)
        if(b[j]==a[i])
        gasit=1;
        if(!gasit)
        c[k++]=b[j];
    }
    cout<<endl<<"Diferenta B si A"<<endl;
    for(j=0; j<k; j++)
        cout<<c[j]<<" ";
 }
