#include<iostream>
using namespace std;

int main()
{
    int A[30][30], n, m, i, j, x[30], maxima, y=1, minima;
    cout<<"Introduceti cate linii sunt in matrice.";
    cin>>n;
    cout<<"Introduceti cate coloane sunt in matrice.";
    cin>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            {
                cout<<"Introduceti elementul ["<<i<<"]["<<j<<"]";
                cin>>A[i][j];
            }
    }
    cout<<"Matricea introdusa: "<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    for(i=1; i<=n; i++)
    {
        maxima=A[i][1];
        for(j=1; j<=m; j++)
            if(A[i][j]>maxima) maxima=A[i][j];
        x[y]=maxima;
        y++;
    }
    cout<<"Vectorul construit cu maxima liniilor: ";
    for(i=1; i<y; i++)
        cout<<x[i]<<" ";
    cout<<endl;
    minima=x[1];
    for(i=1; i<=y; i++)
        if(x[i]<minima) minima=x[i];
    cout<<"Cea mai mica valoarea din vector: "<<minima;
}
