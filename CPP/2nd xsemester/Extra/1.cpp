#include<iostream>
using namespace std;

int main()
{
    int a[30][30], i, j, n, x, y;
    cout<<"Dati numarul de varfuri din graf: "; cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    for(i=1; i<=n; i++)
    {
        cout<<"Cate varfuri adiacente are varful "<<i<<" ? "; cin>>x;
        for(j=1; j<=x; j++)
           {
                cout<<"Dati varful numarul "<<j<<" cu care varful "<<i<<" este adiecent. ";
                cin>>y;
                a[i][y]=a[y][i]=1;
           }
           a[i][i]=0;
    }
    cout<<"Lista de adiacenta cititia: \n";
    for(i=1; i<=n; i++)
        {
            cout<<i<<": ";
            for(j=1; j<=n; j++)
                if(a[i][j]==1) cout<<j<<" ";
            cout<<"\n";
        }
    cout<<"\nMatricea de adiacenta a grafului: \n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
