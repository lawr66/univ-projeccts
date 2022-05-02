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

int rasturnare(int nr)
{
    int s=0;
    int n=nr;
    while(n!=0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    return s;
}

void inserare(lista *p)
{
    lista *c=p;
    while(c->leg!=NULL)
    {
        lista *q=new lista;
        q->inf=rasturnare(c->inf);
        q->leg=c->leg;
        c->leg=q;
        c=q->leg;
    }
    lista *q=new lista;
    q->inf=rasturnare(c->inf);
    q->leg=NULL;
    ultim->leg=q;
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
