#include<iostream>
using namespace std;

int main()
{
    int n, A[30][30], i, j, k, grad[30], m;
    cout<<"Introduceti numarul de varfuri din graf. "; cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
    {
        cout<<"A["<<i<<"]["<<j<<"]="; cin>>A[i][j];
    }
    cout<<"Matricea de adiecenta a grafului este: "<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    for(i=1; i<=n; i++)
        grad[i]=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(A[i][j]==1) grad[i]++;
    m=0;
    for(i=1; i<=n; i++)
        if(grad[i]>m) m=grad[i];
    cout<<"Gradul exterior maxim este "<<m<<" si este grad pentru nodul: ";
    for(i=1; i<=n; i++)
        if(grad[i]==m) cout<<i<<" ";
}
