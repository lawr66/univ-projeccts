#include<iostream>
using namespace std;

struct coada
{
    int inf;
    coada *leg;
};

coada *p, *prim, *ultim;
int x, i, n;

int rasturnare(int nr)
{
    int s=0;
    int n=nr;
    while(n!=0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    return s;
}

void citire_coada(coada *ultim, int i, int n)
{
    coada *p;
    cout<<"Cate elemente o sa introduceti? ";
    cin>>n;
    i=1;
    p=new coada;
    cout<<"Introduceti valoarea "<<i<<" ";
    cin>>x;
    p->inf=x;
    p->leg=NULL;
    prim=ultim=p;
    i=i+1;
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

void afisare_coada(coada *prim)
{
    p=prim;
    while(p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->leg;
    }
}

void inserare(coada *p)
{
    coada *ultim=p;
    while(ultim->leg!=NULL)
    {
        coada *q=new coada;
        q->inf=rasturnare(ultim->inf);
        q->leg=ultim->leg;
        ultim->leg=q;
        ultim=q->leg;
    }
    coada *q=new coada;
    q->inf=rasturnare(ultim->inf);
    q->leg=NULL;
    ultim->leg=q;
}

int main()
{
    citire_coada(ultim, i, n);
    cout<<"Coada citita: ";
    afisare_coada(prim);
    inserare(prim);
    cout<<endl<<"Coada modificata: ";
    afisare_coada(prim);

    return 0;
}
