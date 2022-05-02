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

void adaugare_doua_elemente(lista *&ultim)
{
    int i;
    for(i=1; i<=2; i++)
    {
        cout<<"Introduceti elementul "<<n+i<<". "; cin>>x;
        p=new lista;
        p->leg=NULL;
        p->inf=x;
        ultim->leg=p;
        ultim=p;
    }
}

void adaugare_m_elemente(int m, lista *&ultim)
{
    cout<<endl;
    int i;
    for(i=1; i<=m; i++)
    {
        cout<<"Introduceti elementul "<<n+i+2<<". "; cin>>x;
        p=new lista;
        p->leg=NULL;
        p->inf=x;
        ultim->leg=p;
        ultim=p;
    }
}

int numarare_nr_prime(lista *prim)
{
    int i, x, y=0;
    lista *p;
    p=prim;
    while(p!=NULL)
    {
        x=0;
        for(i=1; i<=p->inf/2; i++)
            if(p->inf%i==0) x++;
        if(x==1) y++;;
        p=p->leg;
    }
    return y;
}

void verificare_crescator(lista *prim)
{
    lista *p;
    int ok=1, y;
    p=prim;
    y=p->inf;
    while(p!=NULL)
    {
        if(y>p->inf)
            {
                ok=0;
                break;
            }
        y=p->inf;
        p=p->leg;
    }
    if(ok==1) cout<<"Numerele sunt in ordine crescatoare.";
    if(ok==0) cout<<"Numerele NU sunt in ordine crescatoare.";
}

int maxim(lista *prim)
{
    int Max;
    lista *p;
    p=prim;
    Max=p->inf;
    while(p!=NULL)
    {
        if(p->inf>Max) Max=p->inf;
        p=p->leg;
    }

    return Max;
}

int minim(lista *prim)
{
    int Min;
    lista *p;
    p=prim;
    Min=p->inf;
    while(p!=NULL)
    {
        if(p->inf<Min) Min=p->inf;
        p=p->leg;
    }

    return Min;
}

int suma(lista *prim)
{
    int s=0;
    lista *p;
    p=prim;
    while(p!=NULL)
    {
        s=s+p->inf;
        p=p->leg;
    }
    return s;
}

int produs(lista *prim)
{
    int pr=1;
    lista *p;
    p=prim;
    while(p!=NULL)
    {
        pr=pr*p->inf;
        p=p->leg;
    }
    return pr;
}

int main()
{
    int m;
    adaugare_la_sfarsit(prim, ultim);
    cout<<endl<<"Lista citita: ";
    afisare(prim);
    cout<<endl<<"Introduceti inca 2 elemente: "<<endl;
    adaugare_doua_elemente(ultim);
    cout<<endl<<"Lista cu cele doua elemente citite: ";
    afisare(prim);
    cout<<endl<<"Introduceti cate elemente mai doriti sa cititi. "; cin>>m;
    adaugare_m_elemente(m, ultim);
    cout<<endl<<"Lista, cu cele m elemente citite: ";
    afisare(prim);
    cout<<endl<<"Numarul de numere prime este: "<<numarare_nr_prime(prim);
    cout<<endl<<"Suma numerelor din lista este: "<<suma(prim);
    cout<<endl<<"Produsul numerelor din lista este: "<<produs(prim);
    cout<<endl;
    verificare_crescator(prim);
    cout<<endl<<"Maximul listei este: "<<maxim(prim);
    cout<<endl<<"Minimul listei este: "<<minim(prim);

    return 0;
}
