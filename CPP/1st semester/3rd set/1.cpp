#include<iostream>
using namespace std;

int main()
{
    unsigned int n, s1=0, s2=0;
    cout<<"Introduceti un numar natural. "; cin>>n;
    while(n!=0)
    {
        s1=s1+n%10;
        n=n/10;
    }
    if(s1>9)
    {
        while(s1!=0)
        {
            s2=s2+s1%10;
            s1=s1/10;
        }
    cout<<"Cifra de control a numarului introdus este: "<<s2;
    }
    else cout<<"Cifra de control a numarului introdus este: "<<s1;
}
