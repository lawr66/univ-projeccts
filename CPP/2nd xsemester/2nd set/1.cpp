#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct coada
{
    int inf;
    coada *leg;
};

coada *prim, *ultim;
int x, i, n, nr, k, ok;

void initializare(coada *prim, coada *ultim)
{
    prim=ultim=NULL;
}

void adaugare_prima_data(coada *&ultim, int n)
{
    coada *p;
    cout<<"Cate elemente doriti sa adaugati in coada? "; cin>>n;
    cout<<"Mai aveti de introdus "<<n<<" element(e). Introduceti o valoare. ";
    cin>>x;
    p=new coada;
    p->inf=x;
    p->leg=NULL;
    prim=ultim=p;
    i=1;
    while(i<n)
    {
        cout<<"Mai aveti de introdus "<<n-i<<" element(e). Introduceti o valoare. ";
        cin>>x;
        p=new coada;
        p->inf=x;
        p->leg=NULL;
        ultim->leg=p;
        ultim=p;
        i++;
    }
}

void adaugare(coada *&ultim, int n)
{
    coada *p;
    i=0;
    cout<<"Cate elemente doriti sa adaugati in coada? "; cin>>n;
    while(i<n)
    {
        cout<<"Mai aveti de introdus "<<n-i<<" element(e). Introduceti o valoare. ";
        cin>>x;
        p=new coada;
        p->inf=x;
        p->leg=NULL;
        ultim->leg=p;
        ultim=p;
        i++;
    }
}

void stergere(coada *&prim)
{
    int q;
    i=0;
    coada *p;
    p=prim;
    cout<<"Cate elemente doriti sa stergeti? "; cin>>n;
    while(i < n && prim !=NULL)
    {
        q=prim->inf;
        p=prim;
        prim=prim->leg;
        delete p;
        i++;
    }
}

void verificare(coada *prim)
{
    if(prim==NULL) cout<<"Coada este vida.";
    else cout<<"Coada nu este vida.";
}

void numarare(coada *prim)
{
    nr=0;
    coada *p;
    p=prim;
    while(p!=NULL)
    {
        nr++;
        p=p->leg;
    }
    cout << "Coada are " << nr << " element(e).";
}

void afisare_coada(coada *prim)
{
    coada *p;
    p=prim;
    cout<<"Coada este: ";
    while(p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->leg;
    }
}

int main()
{
    k=1;
    ok=0;
    cout<<"Coada a fost declarata si initalizata.";
    while(k!=0)
    {
        cout<<endl<<endl;
        cout<<"Ce doriti sa faceti? (alegeti un numar din lista.)"<<endl;
        cout<<"1 Adaguare element(e) in coada."<<endl;
        cout<<"2 Stergere element(e) din coada."<<endl;
        cout<<"3 Verificare daca coada este vida."<<endl;
        cout<<"4 Numararea elementelor din coada."<<endl;
        cout<<"5 Afisarea coadei."<<endl;
        cout<<"0 Iesire. ";
        cin>>k;
        switch(k)
        {
        case 0:
            break;
        case 1:
           if(ok==0)
            {
                adaugare_prima_data(ultim, n);
                ok=1;
            }
           else adaugare(ultim, n);
            break;
        case 2:
            stergere(prim);
            break;
        case 3:
            verificare(prim);
            break;
        case 4:
            numarare(prim);
            break;
        case 5:
            afisare_coada(prim);
            break;
        default:
            cout<<"Ati introdus o optiune inexistenta. Incercati din nou. (Introduceti un numar intre 0 si 5.)"<<endl;
        }
        cout<<endl;
    }

    return 0;
}
