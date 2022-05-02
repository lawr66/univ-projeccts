#include<iostream>
using namespace std;

int main()
{
    int A[20][20], n, m=0, i, j;
    cout<<"Introduceti numarul de noduri din graf. "; cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            {
                if(i==j) A[i][j]=0;
                else
                    {
                        cout<<"Introduceti A["<<i<<"]["<<j<<"]. ";
                        cin>>A[i][j];
                    }
            }
    cout<<"Matricea de adiacenta citita: ";
    for(i=1; i<=n; i++)
           {
            cout<<"\n";
            for(j=1; j<=n; j++)
                {
                    m+=A[i][j];
                    cout<<A[i][j]<<" ";
                }
           }
    cout<<"\nNumarul de muchii din graf: "<<m/2;
}
