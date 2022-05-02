#include<iostream>
#include<string.h>
using namespace std;

struct informatii
{
    string titlu;
    string autor;
    string editura;
}carte;

struct lista
{
    informatii c;
    lista *leg;
};

void init(lista *prim)
{
    prim=NULL;
}

lista *p, *prim, *ultim;

int n, x, y;



void adaugare_la_sfarsit(lista *&prim, lista *&ultim)
{
    int i, x;
    for(i=1; i<=20; i++)
    cout<<"Introduceti numarul de elemente din lista: "; cin>>n;
    cout<<"Introduceti primul element. "<<endl;
    cout<<"Introduceti titlul primei carti. ";
    cin.get(carte.titlu);
    prim=new lista;
    prim->c.titlu=carte.titlu;
    prim->leg=NULL;
    ultim=prim;
    cout<<"Introduceti autroul primei carti. "; cin.get(carte.autor);
    p=new lista;
    p->leg=NULL;
    p->c.autor=carte.autor;
    ultim->leg=p;
    ultim=p;
    cout<<"Introduceti editura primei carti. "; cin.get(carte.editura);
    p=new lista;
    p->leg=NULL;
    p->c.editura=carte.editura;
    ultim->leg=p;
    ultim=p;
    for(i=2; i<=n; i++)
    {
        cout<<"Introduceti titlul cartii "<<i<<" . ";
        cin.get(carte.titlu);
        p=new lista;
        p->c.titlu=carte.titlu;
        p->leg=NULL;
        ultim->leg=p;
        ultim=p;
        cout<<"Introduceti autroul cartii "<<i<<" . "; cin.get(carte.autor);
        p=new lista;
        p->leg=NULL;
        p->c.autor=carte.autor;
        ultim->leg=p;
        ultim=p;
        cout<<"Introduceti editura cartii"<<" . "; cin.get(carte.editura);
        p=new lista;
        p->leg=NULL;
        p->c.editura=carte.editura;
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
        cout<<p->c.titlu<<" ";
        cout<<p->c.autor<<" ";
        cout<<p->c.editura<<" ";
        p=p->leg;
    }
}



int main()
{
    adaugare_la_sfarsit(prim, ultim);
    cout<<endl<<"Lista citita: ";
    afisare(prim);

    return 0;
}
