#include<iostream>
using namespace std;

int main()
{
    unsigned int n, i=1;
    cout<<"Introduceti un numar natural. "; cin>>n;
    cout<<"Divizorii numarului "<<n<<" sunt: ";
    while(i<=n)
    {
        if(n%i==0) cout<<i<<" ";
        i++;
    }
    return 0;
}
