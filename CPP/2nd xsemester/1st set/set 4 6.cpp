#include<iostream>
using namespace std;

int divizori(int n)
{
    int i=1;
    while(i<=n)
    {
        if(n%i==0) cout<<i<<" ";
        i++;
    }
}

int main()
{
    int n;
    cout<<"Introduceti un numar. "; cin>>n;
    cout<<"Divizorii numarului "<<n<<" sunt: ";
    divizori(n);

    return 0;
}
