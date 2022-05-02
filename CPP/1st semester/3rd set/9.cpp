#include<iostream>
using namespace std;

int main()
{
    int n, max=-1, min=10000000, i=0, x;
    cout<<"Introduceti cate numere vreti sa cititi."; cin>>n;
    while(i!=n)
    {
        cout<<"Mai aveti de introdus "<<n-i<<" numere. Introduceti un numar: "; cin>>x;
        if(x>max) max=x;
        if(x<min) min=x;
        i++;
    }
    cout<<"Maximul numerelor introduse este: "<<max<<endl;
    cout<<"Minimul numerelor introduse este: "<<min<<endl;
    cout<<"Suma minimului si maximului numerelor introduse este: "<<max+min<<endl;
    cout<<"Produsul minimului si maximului numerelor introduse este: "<<max*min;

    return 0;
}
