#include<iostream>
using namespace std;

struct coada
{
    int inf;
    coada *leg;
};

coada *p, *prim, *ultim;
int x, i, n;

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
        q->inf=cifra_de_control(ultim->inf);
        q->leg=ultim->leg;
        ultim->leg=q;
        ultim=q->leg;
    }
    coada *q=new coada;
    q->inf=cifra_de_control(ultim->inf);
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
