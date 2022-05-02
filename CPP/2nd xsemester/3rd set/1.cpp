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

int main()
{
    init(prim);
    adaugare_la_sfarsit(prim, ultim);
    cout<<endl<<"Lista citita: ";
    afisare(prim);
    cout<<endl<<"Numarul de numere prime este: "<<numarare_nr_prime(prim);

    return 0;
}
