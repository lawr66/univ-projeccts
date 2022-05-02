#include<iostream>
using namespace std;

int main()
{
    int a, b, k;
    cout<<"Introduceti numarul a."; cin>>a;
    cout<<"Introduceti numarul b."; cin>>b;
    cout<<"Introduceti numarul k."; cin>>k;
    cout<<"Fractia a/b este: "<<a<<"/"<<b<<endl;
    if(a%k==0 && b%k==0)
        cout<<"Fractia se poate simplifica cu k, fractia simplificata arata asa: "<<a/k<<"/"<<b/k;
    else cout<<"Fractia nu se poate simplifica cu k.";
    return 0;
}
