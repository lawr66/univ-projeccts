#include<iostream>
using namespace std;

int main()
{
    int x[30][30], n, m, i, j, y;
    cout<<"Introduceti cate linii sunt in matrice.";
    cin>>n;
    cout<<"Introduceti cate coloane sunt in matrice.";
    cin>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
    {
        cout<<"Introduceti elementul ["<<i<<"]["<<j<<"].";
        cin>>x[i][j];
    }
    for(i=1; i<=n; i++)
    {
        cout<<endl;
        for(j=1; j<=m; j++)
            cout<<x[i][j]<<" ";
    }
    for(i=1; i<=n; i++)
    {
        y=x[i][1];
        x[i][1]=x[i][m];
        x[i][m]=y;
    }
    cout<<endl<<"Matricea modificata: ";
    for(i=1; i<=n; i++)
    {
        cout<<endl;
        for(j=1; j<=m; j++)
            cout<<x[i][j]<<" ";
    }
}
