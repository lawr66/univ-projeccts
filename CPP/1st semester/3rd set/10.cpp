#include<iostream>
using namespace std;

int main()
{
    double n, i=1, f=1;
    cout<<"Introduceti numarul pentru care doriti sa aflati factorialul."; cin>>n;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    cout<<"Factorialul pentru numarul "<<n<<" este: "<<f;

    return 0;
}
