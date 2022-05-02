#include<iostream>
#include<cmath>
using namespace std;

struct lista
{
    int inf;
    lista *leg;
};

struct lista_patrate_perfecte
{
    int info;
    lista_patrate_perfecte *legat;
};

void init(lista *prim)
{
    prim=NULL;
}

lista *p, *prim, *ultim;

lista_patrate_perfecte *pp, *pprim, *pultim;

int n, x;

void adaugare_la_sfarsit(lista *&prim, lista *&ultim)
{
    int i;
    cout<<"introduceti numarul de elemente din lista: "; cin>>n;
    cout<<"introduceti primul element. "; cin>>x;
    prim=new lista;
    prim->inf=x;
    prim->leg=NULL;
    ultim=prim;
    for(i=2; i<=n; i++)
    {
        cout<<"introduceti elementul "<<i<<". "; cin>>x;
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
    float y;
    bool estePatrat;
    lista *p;
    lista_patrate_perfecte *pp;
    p=prim;
    while(p!=NULL)
    {
        estePatrat=true;
        y=round(pow(p->inf*1.0,1.0/2));
            if(y*y!=p->inf) estePatrat=false;
        if(estePatrat && p->inf!=1)
        {
            pprim=new lista_patrate_perfecte;
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
            estePatrat=true;
            y=round(pow(p->inf*1.0,1.0/2));
                if(y*y!=p->inf) estePatrat=false;
            if(estePatrat && p->inf!=1)
            {
                pp=new lista_patrate_perfecte;
                pp->info=p->inf;
                pp->legat=NULL;
                pultim->legat=pp;
                pultim=pp;
            }
            p=p->leg;
        }
    }
}

void afisare_lista_patrate_perfecte(lista_patrate_perfecte *pprim)
{
    lista_patrate_perfecte *pp;
    pp=pprim;
    while(pp!=NULL)
    {
        cout<<pp->info<<" ";
        pp=pp->legat;
    }
}

int main()
{
    init(prim);
    adaugare_la_sfarsit(prim, ultim);
    cout<<endl<<"Lista citita: ";
    afisare(prim);
    creare_lista(prim);
    if(pprim!=NULL)
    {
        cout<<endl<<"Lista creata din patratele perfecte din lista citita: ";
        afisare_lista_patrate_perfecte(pprim);
    }
    else cout<<endl<<"Nu ati introdus nici un patrat perfect.";

    return 0;
}
