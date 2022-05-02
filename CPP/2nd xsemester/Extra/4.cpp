#include<iostream>
using namespace std;

int main()
{
    int a[40][40], b[40][40], n, i, j, orientat=0;
    cout<<"Dati numarul de varfuri din graf. "; cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            {
                if(i==j) a[i][j]=0;
                else
                    {
                        cout<<"Dati a["<<i<<"]["<<j<<"]. ";
                        cin>>a[i][j];
                    }
            }
    cout<<"Matricea de adiacenta citita: ";
    for(i=1; i<=n; i++)
           {
            cout<<"\n";
            for(j=1; j<=n; j++)
                {
                    cout<<a[i][j]<<" ";
                }
           }
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i==j) b[i][j]=0;
            else if(a[i][j]==1 && a[j][i]==1)
            {
                b[i][j]=1;
                b[j][i]=1;
            }
            else if(a[i][j]==1 && a[j][i]==0)
            {
                b[i][j]=0;
                b[j][i]=1;
            }
            else b[i][j]=0;
    cout<<"\nMatricea de adiacenta a transpusului grafului este: ";
    for(i=1; i<=n; i++)
           {
            cout<<"\n";
            for(j=1; j<=n; j++)
                {
                    cout<<b[i][j]<<" ";
                }
           }
}
