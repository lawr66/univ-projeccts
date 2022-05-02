#include<iostream>
using namespace std;

int main()
{
    int a[50][50], n, i, j, l, b, c, d, vizitat[50], v[50], m=0, x;
    bool e_a=true;
    cout<<"Dati numarul de varfuri din graf. " ; cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
                {
                    cout<<"a["<<i<<","<<j<<"]= ";
                    cin>>a[i][j];
                }
    cout<<"Dati varful de plecare "; cin>>x;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            m=m+a[i][j];
    m=m/2;
    for(j=1; j<=n; j++)
        vizitat[j]=0;
    v[1]=x;
    d=1;
    b=1;
    vizitat[i]=1;
    while(d<=b)
    {
        c=v[d];
        for(l=1; l<=n; l++)
            if(a[c][l]==1 && vizitat[l]==0)
        {
            b++;
            v[b]=l;
            vizitat[l]=1;
        }
        d++;
    }
    for(i=1; i<=n; i++)
        if(vizitat[i]==0) e_a=false;
    if(m==n-1 && e_a==true)
        cout<<"Graful citit este arbore.";
    else cout<< "Graful citit nu este arbore.";
}
