#include<iostream>
using namespace std;

int main()
{
    int x[50], y[50], n, i, j=1, k=0, A;
    cout<<"Introduceti cate elemente sunt in vector.";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti elementul "<<i<<" ";
        cin>>x[i];
    }
    cout<<"Introduceti numarul A.";
    cin>>A;
    for(i=1; i<=n; i++)
        if(x[i]>A) k++;
    if(k==0)
            cout<<"In vectorul introdus, nu au fost numere mai mari decat numarul "<<A;
    else
        {
            cout<<"In vectorul introdus, au fost "<<k<<" numere mai mari decat numarul "<<A<<endl;
            cout<<"Vectorul construit cu aceste numere este: ";
            for(i=1; i<=n; i++)
                    if(x[i]>A)
                        {
                            y[j]=x[i];
                            j++;
                        }
            for(i=1; i<=k; i++)
                cout<<y[i]<<" ";
        }

}
