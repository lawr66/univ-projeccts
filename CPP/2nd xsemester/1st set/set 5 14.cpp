#include <iostream>
using namespace std;

int n,i,j=0, x[50],y[50];

int elem_poz(int x[50])
{
    for (i=1;i<=n;i++)
    if(x[i]>=0)
    {
        j++;
        y[j]=x[i];
    }
    cout<<"Elementele pozitive sunt ";
    for (i=1;i<=j;i++)
        cout<<y[i]<<" ";
}

int main()
{
    cout<<"Introduceti numarul de elemente din vector: ";cin>>n;
    for (i=1;i<=n;i++)
        {
            cout<<"Introduceti elementul "<<i<<" ";
            cin>>x[i];
        }
    elem_poz(x);

    return 0;
}
