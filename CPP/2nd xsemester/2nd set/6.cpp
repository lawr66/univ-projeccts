#include<iostream>
using namespace std;

struct coada
{
    int inf;
    coada *leg;
};

coada *p, *prim, *ultim;
int i, x, n, nr;

void citire_coada(coada *ultim, int i, int n)
{
    coada *p;
    cout<<"Cate elemente o sa introduceti? "; cin>>n;
    i=1;
    p=new coada;
    cout<<"Introduceti valoarea "<<i<<" ";
    cin>>x;
    p->inf=x;
    p->leg=NULL;
    prim=ultim=p;
    i++;
    while(i<=n)
    {
            cout<<"Introduceti valoarea "<<i<<": "; cin>>x;
            p=new coada;
            p->inf=x;
            p->leg=NULL;
            ultim->leg=p;
            ultim=p;
            i++;
    }
}

int numarare(coada *prim)
{
    nr=0;
    coada *p;
    p=prim;
    while(p!=NULL)
        {
            nr++;
            p=p->leg;
        }
    return nr;
}


void afisare_mijloc(coada *prim)
{
    i=0;
    coada *p;
    p=prim;
    if(nr%2!=0)
    {
        cout<<"Elementul de pe mijlocul coadei este: ";
        while(p!=NULL)
            {
                if(i==nr/2) cout<<p->inf;
                p=p->leg;
                i++;
            }
    }
    else
    {
        cout<<"Elementele de pe mijlocul coadei este: ";
        while(p!=NULL)
        {
            if(i==(nr/2)-1 || i==nr/2) cout<<p->inf<<" ";
            p=p->leg;
            i++;
        }
    }
}


void afisare_coada(coada *prim)
{
    p=prim;
    while(p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->leg;
    }
}

int main()
{
    citire_coada(ultim, i, n);
    cout<<"Coada introdusa este: ";
    afisare_coada(prim);
    numarare(prim);
    cout<<endl;
    afisare_mijloc(prim);
}
