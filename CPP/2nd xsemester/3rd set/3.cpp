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

int n, x, y;

void creare_lista(lista *&prim, lista *&ultim)
{
    int i;
    cout<<"Introduceti numarul de elemente din lista: "; cin>>n;
    prim=new lista;
    prim->inf=1;
    prim->leg=NULL;
    ultim=prim;
    p=new lista;
    p->leg=NULL;
    p->inf=1;
    ultim->leg=p;
    ultim=p;
    x=y=1;
    for(i=2; i<n; i++)
    {
        p=new lista;
        p->leg=NULL;
        p->inf=x+y;
        ultim->leg=p;
        ultim=p;
        x=y;
        y=p->inf;
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
    init(prim);
    creare_lista(prim, ultim);
    cout<<"Lista creata: ";
    afisare(prim);

    return 0;
}
