#include<iostream>
#include<string.h>
using namespace std;

struct lista
{
    char inf;
    lista *leg;
};

void init(lista *prim)
{
    prim=NULL;
}

lista *p, *prim, *ultim;

int n;
char x;

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
        cout<<(char)p->inf<<" ";
        p=p->leg;
    }
}

void inlocuire_vocale(lista *prim)
{
    int i;
    lista *p;
    p=prim;
    while(p!=NULL)
    {
        if(strchr("aeiou",p->inf)) p->inf=p->inf+1;
        p=p->leg;
    }
}

void litere_mari(lista *prim)
{
    int i;
    lista *p;
    p=prim;
    while(p!=NULL)
    {
        p->inf=p->inf-32;
        p=p->leg;
    }
}

int main()
{
    adaugare_la_sfarsit(prim, ultim);
    cout<<endl<<"Lista citita: ";
    afisare(prim);
    cout<<endl<<"Lista cu vocalele modificate: ";
    inlocuire_vocale(prim);
    afisare(prim);
    cout<<endl<<"Lista cu litere mari: ";
    litere_mari(prim);
    afisare(prim);

    return 0;
}
