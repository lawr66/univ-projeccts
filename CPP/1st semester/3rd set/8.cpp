#include<iostream>
using namespace std;

int main()
{
    unsigned int n, s=0, par=0;
    do
    {
        cout<<"Extrageti o bila (introduceti un numar de la 1 la 50). "; cin>>n;
        while(n>50 || n<0)
            {
                cout<<"Ati introdus un numar incorect, incercati din nou.";
                cin>>n;
            }
        s=s+n;
        if(n%2==0) par++;
    }while(n>=30);
    cout<<"Suma valorilor tuturor bilelor extrase este: "<<s<<endl;
    cout<<par<<" de bile extrase aveau valoare para.";

    return 0;
}
