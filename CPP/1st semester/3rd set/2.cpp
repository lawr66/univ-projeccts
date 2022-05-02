#include<iostream>
using namespace std;

int main()
{
    int n, i=2, j, k, p=0, s1, s2, l, x;
    cout<<"Introduceti un numar. "; cin>>n;
    while(i!=n)
    {
        j=i;
        k=1;
        s1=0;
        while(k<=j/2)
        {
            if(j%k==0) s1=s1+k;
            k++;
        }
        k=1;
        while(k<=j)
        {
            l=1;
            x=k;
            s2=0;
            while(l<=x/2)
                {
                    if(x%l==0) s2=s2+l;
                    l++;
                }
            if(s1==x && s2==j && x!=j)
            {
                p=1;
                cout<<x<<" si "<<j<<" sunt numere prietene."<<endl;
            }
            k++;
        }
        i++;
    }
    if(p==0) cout<<"Nu exista numere prietene pana la numarul introdus.";

    return 0;
}
