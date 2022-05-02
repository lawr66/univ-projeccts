#include<iostream>
using namespace std;

struct stiva
{
    int inf;
    stiva *leg;
};

struct coada
{
    int c;
    coada *legatura;
};

stiva *p, *vf, *baza;
coada *po, *prim, *ultim;
int x, i, n, nr, ok;

int citire_stiva(stiva *&vf, stiva *&baza)
{
    ok=0;
    int i=1, inf;
    cout<<"Introduceti numarul de elemente din stiva:"; cin>>n;
    cout<<"Introduceti elementul "<<i<<": "; cin>>x;
    vf=new stiva;
    vf->inf=x;
    vf->leg=NULL;
    baza=vf;
    if(x%2==0)
    {
        nr=x;
        ok=1;
    }
    for(i=2; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<": ";
        cin>>x;
        if(x%2==0 && ok==0)
        {
            nr=x;
            ok=1;
        }
        p=new stiva;
        p->inf=x;
        p->leg=vf;
        vf=p;
    }
    return nr;
}

void creare_coada(coada *ultim, int i, int n)
{
    coada *po;
    ok=0;
    po=new coada;
    po->c=nr;
    po->legatura=NULL;
    prim=ultim=po;
    p=vf;
    while(p!=NULL)
    {
        if(p->inf==nr && ok==0) ok=1;
        else if(p->inf%2==0)
        {
            po=new coada;
            po->c=p->inf;
            po->legatura=NULL;
            ultim->legatura=po;
            ultim=po;
        }
        p=p->leg;
    }

}

void afisare_stiva(stiva *vf)
{
    p=vf;
    while(p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->leg;
    }
}

void afisare_coada(coada *prim)
{
    po=prim;
    while(po!=NULL)
    {
        cout<<po->c<<" ";
        po=po->legatura;
    }
}

int main()
{
    citire_stiva(vf, baza);
    cout<<"Stiva citita: ";
    afisare_stiva(vf);
    creare_coada(ultim, i, n);
    cout<<endl<<"Coada creata: ";
    afisare_coada(prim);

    return 0;
}
