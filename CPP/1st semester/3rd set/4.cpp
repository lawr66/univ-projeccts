#include<iostream>
using namespace std;

int main()
{
    unsigned a, b, adv=1, i, j, x, prim;
    cout<<"Introduceti numarul a. "; cin>>a;
    cout<<"Introduceti numarul b. "; cin>>b;
    i=a;
    while(i<=b)
    {
        prim=0;
        j=2;
        x=0;
        while(j<=i/2)
        {
            if(i%j==0) prim++;
            j++;
        }
        j=i;
        if(prim==0)
        {
            while(j!=0)
            {
                x=x*10+j%10;
                j=j/10;
            }
            if(x==i)
                {
                    cout<<x<<" este un numar prim palindrom. "<<endl;
                    adv=0;
                }
        }
        i++;
    }
    if(adv==1) cout<<"Nici un numar din intervalul ["<<a"<<,"<<b<<"] nu este un numar prim palindrom.";
    return 0;
}
