#include<iostream>
using namespace std;

int main()
{
    int x[20], i, y, n, k;
    cout<<"Introduceti cate elemente sunt in vector: "; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";
        cin>>x[i];
    }
    cout<<"Vectorul original: ";
    for(i=1; i<=n; i++)
        cout<<x[i]<<" ";
    k=n;
    for(i=1; i<=n/2; i++)
    {
        y=x[k];
        x[k]=x[i];
        x[i]=y;
        k--;
    }
    cout<<endl<<"Vectorul inversat: ";
    for(i=1; i<=n; i++)
        cout<<x[i]<<" ";
}
