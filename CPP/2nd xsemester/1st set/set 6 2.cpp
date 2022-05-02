#include <iostream>
using namespace std;

int n, m, Min, i, j, Max, a[30][30];

int min_linii()
{
    for(i=1; i<=n; i++)
    {
        j=1;
        Min=a[i][j];
        cout<<"Minimul liniei "<<i<<" este: ";
        for(j=2; j<=m; j++)
            if(a[i][j]<Min) Min=a[i][j];
        cout<<Min<<endl;
    }
}

int max_coloane()
{
    for(j=1; j<=m; j++)
    {
        i=1;
        Max=a[i][j];
        cout<<"Maximul coloanei "<<j<<" este: ";
        for(i=2; i<=n; i++)
            if(a[i][j]>Max) Max=a[i][j];
        cout<<Max<<endl;
    }
}

int main()
{
    cout<<"Dati numarul de linii a matricei = ";cin>>n;
    cout<<"Dati numarul de coloane a matricei = ";cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
                cout<<"a["<<i<<","<<j<<"]= ";
            cin>>a[i][j];
            }
    cout<<"Elementele matricei A sunt: "<<endl;
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    min_linii();
    max_coloane();


    return 0;
}
