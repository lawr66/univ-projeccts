#include<iostream>
using namespace std;

int main()
{
    int A[30][30], n, m, i, j, s=0;
    cout<<"Introduceti numarul liniilor din matrice: ";
    cin>>n;
    cout<<"Introduceti numarul coloanelor din matrice :";
    cin>>m;

    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
    {
        cout<<"Introduceti elementul ["<<i<<"]["<<j<<"] ";
        cin>>A[i][j];
    }
        for(i=1; i<=n; i++)
    {
        cout<<endl;
        for(j=1; j<=m; j++)
            cout<<A[i][j]<<" ";
    }
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            if((i==1|| i==n) || (j==1 || j==m))
                s=s+A[i][j];
    cout<<endl<<"Suma componentelor de pe marginea matricei este: "<<s;
}
