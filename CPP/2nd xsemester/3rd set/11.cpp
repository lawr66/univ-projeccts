#include<iostream>
using namespace std;

struct lista
{
    int inf;
    lista *leg;
};

struct lista_nr_prime
{
    int info;
    lista_nr_prime *legat;
};

void init(lista *prim)
{
    prim=NULL;
}

lista *p, *prim, *ultim;

lista_nr_prime *pp, *pprim, *pultim;

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


void creare_lista(lista *&prim)
{
    int i;
    bool estePrim;
    lista *p;
    lista_nr_prime *pp;
    p=prim;
    while(p!=NULL)
    {
        estePrim=true;
        for(i=2; i<=p->inf/2; i++)
            if(p->inf%i==0)
            {
                estePrim=false;
                break;
            }
        if(estePrim && p->inf!=1)
        {
            pprim=new lista_nr_prime;
            pprim->info=p->inf;
            pprim->legat=NULL;
            break;
        }
        p=p->leg;
    }
    if(p!=NULL)
    {
        p=p->leg;
        pultim=pprim;
        while(p!=NULL)
        {
            estePrim=true;
            for(i=2; i<=p->inf/2; i++)
                if(p->inf%i==0)
                {
                    estePrim=false;
                    break;
                }
            if(estePrim && p->inf!=1)
            {
                pp=new lista_nr_prime;
                pp->info=p->inf;
                pp->legat=NULL;
                pultim->legat=pp;
                pultim=pp;
            }
            p=p->leg;
        }
    }
}

void afisare_lista_prime(lista_nr_prime *pprim)
{
    lista_nr_prime *pp;
    pp=pprim;
    while(pp!=NULL)
    {
        cout<<pp->info<<" ";
        pp=pp->legat;
    }
}

int main()
{
    adaugare_la_sfarsit(prim, ultim);
    cout<<endl<<"Lista citita: ";
    afisare(prim);
    creare_lista(prim);
    if(pprim!=NULL)
    {
        cout<<endl<<"Lista creata din numerele prime din lista citita: ";
        afisare_lista_prime(pprim);
    }
    else cout<<endl<<"Nu ati introdus nici un numar prim.";

    return 0;
}
