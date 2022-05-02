#include <iostream>

int A[30][30], n, m, i, j, k;

using namespace std;

int marire(int A[30][30])
{
    cout<<"Introduceti numarul k."; cin>>k;
    for(i=0; i<n; i++)
    {
        cout<<endl;
        for(j=0; j<n; j++)
        {
            A[i][j]=A[i][j]+k;
            cout<<A[i][j]<<" ";
        }
    }
}

int main()
{
    cout<<"Introduceti numarul de linii pentru matricea A "; cin>>n;
    cout<<"Introduceti numarul de coloane pentru matricea A "; cin>>m;

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            cout<<"A["<<i<<","<<j<<"]="; cin>>A[i][j];
        }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    marire(A);

    return 0;
}
