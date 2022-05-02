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

int n, x, v[30], i;

void creare_lista(lista *&prim, lista *&ultim)
{
    lista *p;
    p=new lista;
    p->inf=v[1];
    p->leg=NULL;
    prim=ultim=p;
    i=2;
    while(i<=n)
    {
        p=new lista;
        p->leg=NULL;
        p->inf=v[i];
        ultim->leg=p;
        ultim=p;
        i++;
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


int main()
{
    cout<<"Introduceti numarul de elemente din vector. "; cin>>n;
    cout<<"Introduceti elementele vectorului. "<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul ["<<i<<"] "; cin>>v[i];
    }
    cout<<endl<<"Vectorul introdus: ";
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
    creare_lista(prim, ultim);
    cout<<endl<<endl<<"Lista creata cu elementel vectorului: ";
    afisare(prim);

    return 0;
}
