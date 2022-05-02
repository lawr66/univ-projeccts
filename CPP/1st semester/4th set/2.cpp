#include<iostream>
using namespace std;

int main()
{
    int n, m, A[20], B[20], C[20], i, j, k=0;
    cout<<"Introduceti cate elemente sunt in prima multime: "; cin>>n;
    for(i=1; i<=n; i++)
        {
            cout<<"Introduceti elementul "<<i<<" ";
            cin>>A[i];
        }
    cout<<"Introduceti cate elemente sunt in a doua multime: "; cin>>m;
    for(i=1; i<=m; i++)
        {
            cout<<"Introduceti elementul "<<i<<" ";
            cin>>B[i];
        }
    i=1;
    j=1;
    while(i<=n && j<=m)
    {
        if(A[i]<B[j])
            {
                if(A[i]!=C[k])
                    {
                        k++;
                        C[k]=A[i];
                    }
                i++;
            }
        else
        {
            if(B[j]!=C[k])
                {
                    k++;
                    C[k]=B[j];
                }
            j++;
        }
    }
    while(i<=n)
        {
            k++;
            C[k]=A[i];
            i++;
        }
    while(j<=m)
        {
            k++;
            C[k]=B[j];
            j++;
        }
    cout<<"Reuinunea multiimilor introduse este: ";
    for(i=1; i<=k; i++)
        cout<<C[i]<<" ";
}
