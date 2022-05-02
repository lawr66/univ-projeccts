#include<iostream>
using namespace std;

int main()
{
    unsigned n, i=2, f1=1, f2=1, f3;
    cout<<"Introduceti un numar natural. "; cin>>n;
    while(i<n)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        i++;
    }
    cout<<"Termenul de rangul "<<n<<" din sirul lui Fibonacci este: "<<f3;

    return 0;
}
