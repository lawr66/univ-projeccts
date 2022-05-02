#include<iostream>
using namespace std;

struct lista
{
    int inf;
    lista *leg;
};

lista *p, *prim, *ultim;

struct listapar
{
    int info;
    listapar *legat;
};

listapar *pp, *pprim, *pultim;

struct listaimpar
{
    int informatie;
    listaimpar *legatura;
};

listaimpar *ip, *iprim, *iultim;

int n, x, y;

void adaugare_la_sfarsit(lista *&prim, lista *&ultim)
{
    int i, x;
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

void creare_listapar(lista *prim)
{
    lista *p;
    listapar *pp;
    p=prim;
    while(p!=NULL)
    {
        if(p->inf%2==0)
        {
            pprim=new listapar;
            pprim->info=p->inf;
            pprim->legat=NULL;
            break;
        }
        p=p->leg;
    }
    p=p->leg;
    pultim=pprim;
    while(p!=NULL)
    {
        if(p->inf%2==0)
        {
            pp=new listapar;
            pp->info=p->inf;
            pp->legat=NULL;
            pultim->legat=pp;
            pultim=pp;
        }
        p=p->leg;
    }
}

void creare_listaimpar(lista *prim)
{
    lista *p;
    listaimpar *ip;
    p=prim;
    while(p!=NULL)
    {
        if(p->inf%2!=0)
        {
            iprim=new listaimpar;
            iprim->informatie=p->inf;
            iprim->legatura=NULL;
            break;
        }
        p=p->leg;
    }
    p=p->leg;
    iultim=iprim;
    while(p!=NULL)
    {
        if(p->inf%2!=0)
        {
            ip=new listaimpar;
            ip->legatura=NULL;
            ip->informatie=p->inf;
            iultim->legatura=ip;
            iultim=ip;
        }
        p=p->leg;
    }
}

void afisare_lista(lista *prim)
{
    lista *p;
    p=prim;
    while(p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->leg;
    }
}

void afisare_listapar(listapar *pprim)
{
    listapar *pp;
    pp=pprim;
    while(pp!=NULL)
    {
        cout<<pp->info<<" ";
        pp=pp->legat;
    }
}

void afisare_listaimpar(listaimpar *iprim)
{
    listaimpar *ip;
    ip=iprim;
    while(ip!=NULL)
    {
        cout<<ip->informatie<<" ";
        ip=ip->legatura;
    }
}



int main()
{
    adaugare_la_sfarsit(prim, ultim);
    cout<<endl<<"Lista citita: ";
    afisare_lista(prim);
    creare_listapar(prim);
    creare_listaimpar(prim);
    cout<<endl<<"Lista creata cu numerele pare a listei citite: ";
    afisare_listapar(pprim);
    cout<<endl<<"Lista creata cu numerele impare a listei citite: ";
    afisare_listaimpar(iprim);

    return 0;
}
