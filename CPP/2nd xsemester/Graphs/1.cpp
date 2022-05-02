#include<iostream>
using namespace std;

int main()
{
    int A[30][30], n, i, j;
    cout<<"Introduceti numarul de varfuri din graf."; cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            {
                if(i==j) A[i][j]=0;
                else
                {
                    cout<<"Introduceti A["<<i<<"]["<<j<<"]. "; cin>>A[i][j];
                }
            }
    cout<<endl<<"Matricea de adiacenta citita: ";
    for(i=1; i<=n; i++)
    {
        cout<<endl;
        for(j=1; j<=n; j++)
            cout<<A[i][j]<<" ";
    }
    cout<<endl<<"Lista de adiacenta este: ";
    for(i=1; i<=n; i++)
    {
        cout<<endl<<i<<": ";
        for(j=1; j<=n; j++)
            if(A[i][j]==1) cout<<j<<" ";
    }
}
