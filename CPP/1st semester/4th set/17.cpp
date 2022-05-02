#include<iostream>
using namespace std;

int main()
{
    int x[20], i, d, n;
    cout<<"Introduceti cate elemente sunt in vector: "; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";
        cin>>x[i];
    }
    d=x[0];
    for(i=1;i<n;i++)
        {
            while(d!=x[i])
        {
            if(d>x[i]) d=d-x[i];
            else x[i]=x[i]-d;
        }
        }
    cout<<"Cel mai mare divizor comun al elementelor din vectorul x este:"<<d;
    return 0;

}
