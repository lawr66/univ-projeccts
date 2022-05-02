#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, i=2, s=0, x;
    cout<<"Introduceti pana ce numar va intereseaza suma patratelor perfecte. "; cin>>n;
    while(i<=n)
    {
        x=sqrt(i);
        if(x*x==i) s=s+i;
        i++;
    }
    cout<<"Suma patratelor perfecte pana numarul "<<n<<" este: "<<s;

    return 0;
}
