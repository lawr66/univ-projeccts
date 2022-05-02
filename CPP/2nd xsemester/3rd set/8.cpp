#include<iostream>
using namespace std;

struct lista
{
    int inf;
    lista *leg;
};

void init(lista *prim)
{
    prim=NULL;
}

lista *p, *prim, *ultim;

int n, x, a[30][30], i, j, m;

void creare_lista(lista *&prim, lista *&ultim)
{
    lista *p;
    p=new lista;
    p->inf=a[1][1];
    p->leg=NULL;
    prim=ultim=p;
    i=1;
    j=2;
    while(i<=n)
    {
        while(j<=m)
        {
            p=new lista;
            p->leg=NULL;
            p->inf=a[i][j];
            ultim->leg=p;
            ultim=p;
            j++;
        }
        i++;
        j=1;
    }
}


void afisare(lista *prim)
{
    lista *p;
    p=prim;
    while(p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->leg;
    }
}


int main()
{
    cout<<"Introduceti numarul de linii din matrice. "; cin>>n;
    cout<<"Introduceti numarul de coloane din matrice. "; cin>>m;
    cout<<"Introduceti elementele matricei. "<<endl;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
    {
        cout<<"Introduceti elementul ["<<i<<"]["<<j<<"]. "; cin>>a[i][j];
    }
    cout<<endl<<"Matricea citita: "<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    creare_lista(prim, ultim);
    cout<<endl<<"Lista creata cu elementel matricei: ";
    afisare(prim);

    return 0;
}
