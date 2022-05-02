#include<iostream>
using namespace std;

int main()
{
    int x[100], y[100], ea=1, eb=0, i, n;
    cout<<"Introudceti cate elemente sunt in vectori: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" pentru primul vector.";
        cin>>x[i];
    }
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" pentru al doilea vector.";
        cin>>y[i];
    }
    for(i=1; i<=n; i++)
    {
        ea=ea*(x[i]+y[i]);
        eb=eb+(x[i]*y[i]);
    }
    cout<<endl;
    cout<<"ea="<<ea<<endl;
    cout<<"eb="<<eb;
}
