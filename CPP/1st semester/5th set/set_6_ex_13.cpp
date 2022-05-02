#include<iostream>
using namespace std;

int main()
{
    int x[50][50], n, m, i, j, k, y;
    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
    {
        cout<<"Introduceti elementul ["<<i<<"]["<<j<<"] ";
        cin>>x[i][j];
    }
    for(i=1; i<=n; i++)
    {
        cout<<endl;
        for(j=1; j<=m; j++)
            cout<<x[i][j]<<" ";
    }
    cout<<endl;
    i=1;
    while(i<=n)
    {
        k=1;
        j=1;
        y=m;
        while(j<=m/2)
        {
            if(x[i][j]!=x[i][y]) k=0;
            j++;
            y--;
        }
        if(k==1) cout<<"Linia "<<i<<" este simetrica"<<endl;
        else cout<<"Linia "<<i<<" nu este simetrica"<<endl;
        i++;
}
}
