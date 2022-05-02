#include<iostream>
using namespace std;

struct coada
{
    int inf;
    coada *leg;
};

coada *p, *prim, *ultim;
int x, a[30][30], i, j, n, m;

void creare_coada(coada *ultim, int i, int n)
{
    coada *p;
    p=new coada;
    p->inf=a[1][1];
    p->leg=NULL;
    prim=ultim=p;
    i=1;
    j=2;
    while(i<=n)
    {
        while(j<=m)
        {
            p=new coada;
            p->inf=a[i][j];
            p->leg=NULL;
            ultim->leg=p;
            ultim=p;
            j++;
        }
        i++;
        j=1;
    }
}

void afisare_coada(coada *prim)
{
    p=prim;
    while(p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->leg;
    }
}

int main()
{
    cout<<"Introduceti numarul de linii din matrice: "; cin>>n;
    cout<<"Introduceti numarul de coloane din matrice: "; cin>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
    {
        cout<<"Introduceti a["<<i<<"]["<<j<<"]. ";
        cin>>a[i][j];
    }

    cout<<"Matricea introdusa: ";
    for(i=1; i<=n; i++)
    {
        cout<<endl;
        for(j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
    }
    creare_coada(ultim, i, n);
    cout<<endl<<"Coada creata cu elementele matricei: ";
    afisare_coada(prim);

    return 0;
}
