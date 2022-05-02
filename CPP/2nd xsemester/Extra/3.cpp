#include<iostream>
using namespace std;

int main()
{
    int a[50][50], n, i, j, orientat=0;
    cout<<"Dati numarul de noduri din graf. "; cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            {
                if(i==j) a[i][j]=0;
                else
                    {
                        cout<<"Dati a["<<i<<"]["<<j<<"]. ";
                        cin>>a[i][j];
                    }
            }
    cout<<"Matricea de adiacenta citita: ";
    for(i=1; i<=n; i++)
           {
            cout<<"\n";
            for(j=1; j<=n; j++)
                {
                    cout<<a[i][j]<<" ";
                }
           }
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(a[
            i][j]!=a[j][i])
            {
                orientat=1;
                break;
            }
    if(orientat==0) cout<<endl<<"Graful citit este neorientat.";
    else cout<<endl<<"Graful citit este orientat.";
}
