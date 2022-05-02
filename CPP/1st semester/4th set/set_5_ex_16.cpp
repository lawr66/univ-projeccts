/*#include<iostream>
using namespace std;

int main()
{
    int x[100], i, n, k=0;
    cout<<"Introduceti cate numere sunt in vector: "; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";
        cin>>x[i];
    }
    for(i=1; i<=n; i++)
    {
        if(x[i]<x[i+1])
            k=k+1;
        else
            k=0;
    }
    if(k==n)
        cout<<"Nr. sunt in ordine crescatoare.";
    else
        cout<<"Nr. nu sunt in ordine crescatoare.";
}
*/
#include <iostream>

using namespace std;

int main()
{

int n,i,j,a,x[50][50], maxim;

cout<<"n= ";cin>>n;
for (i=1;i<=n;i++)
    for(j=1; j<=n; j++)
{
    cout<<"x["<<i<<"]["<<j<<"]=";
    cin>>x[i][j];
}
    maxim=x[1][1];
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(x[i][j]>maxim) maxim=x[i][j];

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(x[i][j]==maxim) cout<<"Numarul "<<maxim<<" este pe pozitia: "<<i<<" "<<j<<endl;
}

