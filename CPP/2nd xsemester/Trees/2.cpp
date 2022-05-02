#include<iostream>
using namespace std;

struct arbore
{
    int inf;
    arbore *st, *dr;
};

arbore *rad;

arbore *creare()
{
    arbore *b;
    int dec;
    cout<<endl<<"Introduceti un nod null? (tastati 1 daca da, tastati 0 daca nu). "; cin>>dec;
    if(dec==0)
    {
        b=new arbore;
        cout<<"Introduceti informatia."; cin>>b->inf;
        cout<<"Urmeaza succesorul stang al varfului cu informatia "<<b->inf;
        b->st=creare();
        cout<<"Urmeaza succesorul drept varfului cu informatia "<<b->inf;
        b->dr=creare();
        return b;
    }
    else return NULL;
}

void preordine(arbore *a)
{
    if(a!=NULL)
    {
        cout<<a->inf<<" ";
        preordine(a->st);
        preordine(a->dr);
    }
}

void inordine(arbore *a)
{
    if(a!=NULL)
    {
        inordine(a->st);
        cout<<a->inf<<" ";
        inordine(a->dr);
    }
}

void postordine(arbore *a)
{
    if(a!=NULL)
    {
        postordine(a->st);
        postordine(a->dr);
        cout<<a->inf<<" ";
    }
}

int main()
{
    int ok=0;
    arbore *a, *ar;
    a=creare();
    cout<<endl<<"Parcurgerea in preordine: ";
    preordine(a);
    cout<<endl<<"Parcurgerea in postordine: ";
    postordine(a);
    cout<<endl<<"Parcurgerea in inordine: ";
    inordine(a);
}
