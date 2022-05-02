#include<iostream>
using namespace std;

int main()
{
    int a[20][20], st[20], dr[20], n, rad, i, j, info[20], ads=1;
    cout<<"Introduceti numarul de varfuri din arbore care nu sunt frunze. "; cin>>n;
    for(i=1; i<=n; i++)
            {
                cout<<"Introduceti valoarea asociata numarului de ordine "<<i<<". ";
                cin>>info[i];
                cout<<"Introduceti valoarea ascociata a descendentului stang a numarului de orinde "<<i<<" ";
                cin>>st[i];
                cout<<"Introduceti valoarea ascociata a descendentului drept a numarului de orinde "<<i<<" ";
                cin>>dr[i];
            }
    for(i=1; i<=n; i++)
        if((st[i]>info[i] || dr[i]<info[i]) && dr[i]!=0)
    {
        ads=0;
        break;
    }
    if(ads==1) cout<<"Arborele citit este arbore de sortare.";
    else cout<<"Arborele citt nu este arbore de sortare.";
}
