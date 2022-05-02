#include<iostream>
using namespace std;

int main()
{
    unsigned int n, adv=1, i=2, j, p, s;
    cout<<"Introduceti un numar natural. "; cin>>n;
    while(i!=n)
    {
        s=0;
        p=1;
        j=i;
        while(j!=0)
        {
            p=j%10;
            s=s+(p*p*p);
            j=j/10;
        }
        if(s==i)
        {
            adv=0;
            cout<<i<<" este un numar cu proprietatea ca suma cuburilor cifrelor sale este egala cu numarul insusi."<<endl;
        }
        i++;
    }
    if(adv==1) cout<<"Nici un numar mai mic ca cel introdus nu are proprietatea ca suma cuburilor cifrelor sale este egala cu numarul insusi.";
    return 0;
}
