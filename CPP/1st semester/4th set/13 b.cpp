#include<iostream>
using namespace std;

int main()
{
    int x[20], y[20], i, j, n;
    cout<<"Introduceti cate elemente sunt in vector. "; cin>>n;
    for(i=1; i<=n; i++)
        {
            cout<<"Introduceti elementul: "<<i<<" ";
            cin>>x[i];
        }
    cout<<"Vectorul original: ";
    for(i=1; i<=n; i++)
        cout<<x[i]<<" ";
    j=n;
    for(i=1; i<=n; i++)
    {
            y[j]=x[i];
            j--;
    }
    cout<<endl<<"Vectorul inversat: ";
    for(i=1; i<=n; i++)
        cout<<y[i]<<" ";
}
