#include <iostream>
using namespace std;

int n, m, i, j, s, k, a[30][30];

int suma(int k)
{
    s=0;
    for (i=1; i<=m;i++)
            s=s+a[i][k];
    return s;
}

int main()
{
    cout<<"Introduceti numarul de linii din matrice: "; cin>>n;
    cout<<"Introduceti numarul de coloane din matrice: "; cin>>m;
    for (i=1; i<=n;i++)
        for (j=1; j<=m;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }

    for (i=1; i<=n;i++)
    {
        for (j=1; j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Introduceti numarul k "; cin>>k;
    suma(k);

    cout<<endl<<"Suma elementelor de pe coloana "<<k<<" este "<<s;

    return 0;
}
