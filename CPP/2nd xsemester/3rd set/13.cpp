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

int n, x, s, nr;

void adaugare_la_sfarsit(lista *&prim, lista *&ultim)
{
    int i;
    cout<<"Introduceti numarul de elemente din lista: "; cin>>n;
    cout<<"Introduceti primul element. "; cin>>x;
    prim=new lista;
    prim->inf=x;
    prim->leg=NULL;
    ultim=prim;
    for(i=2; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<". "; cin>>x;
        p=new lista;
        p->leg=NULL;
        p->inf=x;
        ultim->leg=p;
        ultim=p;
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

int produs(int nr)
{
    int p=1, x;
    x=nr;
    while(x!=0)
    {
        p=p*(x%10);
        x=x/10;
    }
    return p;
}

void inserare(lista *p)
{
    lista *q;
    p = prim;
    while(p != NULL)
    {
        q = new lista;
        q->inf = produs(p->inf);
        q->leg = p->leg;
        p->leg = q;
        p = p->leg->leg;
    }
}

int main()
{
    adaugare_la_sfarsit(prim, ultim);
    cout<<endl<<"Lista citita: ";
    afisare(prim);
    inserare(prim);
    cout<<endl<<"Lista modificata: ";
    afisare(prim);

    return 0;
}
