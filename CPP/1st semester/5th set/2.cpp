#include <iostream>
using namespace std;
int main()
{
    int n,m,min,i,j,max,a[30][30];
    cout<<"Dati dimensiunile matricei "<<endl;
    cout<<"Dati numarul de linii n = ";cin>>n;
    cout<<"Dati numarul de coloane m = ";cin>>m;
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

    for(i=1; i<=n; i++)
    {
        j=1;
        min=a[i][j];
        cout<<"Minimul liniei "<<i<<" este: ";
        for(j=2; j<=m; j++)
            if(a[i][j]<min) min=a[i][j];
        cout<<min<<endl;
    }

    for(j=1; j<=m; j++)
    {
        i=1;
        max=a[i][j];
        cout<<"Maximul coloanei "<<j<<" este: ";
        for(i=2; i<=n; i++)
            if(a[i][j]>max) max=a[i][j];
        cout<<max<<endl;
    }
}
