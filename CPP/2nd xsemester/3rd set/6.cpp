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

int cifra_de_control(int nr)
{
    int s, m;
    m=nr;
    while(m>9)
    {
        s=0;
        while(m!=0)
        {
            s=s+m%10;
            m=m/10;
        }
        m=s;
    }
    return m;
}

void inserare(lista *p)
{
    lista *ultim=p;
    while(ultim->leg!=NULL)
    {
        lista *q=new lista;
        q->inf=cifra_de_control(ultim->inf);
        q->leg=ultim->leg;
        ultim->leg=q;
        ultim=q->leg;
    }
    lista *q=new lista;
    q->inf=cifra_de_control(ultim->inf);
    q->leg=NULL;
    ultim->leg=q;
}

int stergere_nr_prim(lista *&prim)
{
    int i, x;
    lista *p, *q;
    p=q=prim;
    while(p!=NULL)
    {
        x=0;
        for(i=1; i<=p->inf/2; i++)
            if(p->inf%i==0) x++;
        if(x==1)
        {
            p=q->leg;
            q->inf=q->leg->inf;
            q->leg=q->leg->leg;
            delete p;
        }
        p=p->leg;
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
    stergere_nr_prim(prim);
    cout<<endl<<"Lista, fara numerele prime: ";
    afisare(prim);

    return 0;
}
