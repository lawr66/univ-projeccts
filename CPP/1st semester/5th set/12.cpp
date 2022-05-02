#include <iostream>
using namespace std;
int main()
{
    int A[10][10], n, m, i, j, min, num;

    cout<< "Numarul de linii pentru matricea A; "; cin>>n;
    cout<< "Numarul de coloane pentru matricea A; "; cin>>m;

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            cout<<"A["<<i<<","<<j<<"]="; cin>>A[i][j];
        }

    for(i=0; i<n; i++)\
    {
        for(j=0; j<m; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

    min=A[0][0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            if (A[i][j] < min)
                {
                min = A[i][j];
                }
    }
    cout<<" Valoarea minima este "<<min<<endl;

    num=0;
    for(i=0; i<n; i++)\
    {
        for(j=0; j<m; j++)
            if (A[i][j] == min)
                {
                num++;
                }
    }
    cout<<" Valoarea minima apare de "<<num<<" ori, pe pozitiile: ";
        for(i=0; i<n; i++)\
    {
        for(j=0; j<m; j++)
            if (A[i][j] == min)
                {
                    cout<<"["<<i<<"]["<<"["<<j<<"] ";
                }
    }
}
