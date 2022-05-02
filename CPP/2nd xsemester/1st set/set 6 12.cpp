#include <iostream>
using namespace std;

float A[30][30], n, m, Min, num;
int i, j;

float numarare(float Min)
{
    num=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            if (A[i][j] == Min)
                {
                    num++;
                }
    }
    return num;
}

int main()
{
    cout<< "Numarul de linii pentru matricea A "; cin>>n;
    cout<< "Numarul de coloane pentru matricea A "; cin>>m;

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            cout<<"A["<<i<<","<<j<<"]="; cin>>A[i][j];
        }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

    Min=A[0][0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            if (A[i][j] < Min)
                {
                Min = A[i][j];
                }
    }
    cout<<"Valoarea minima este "<<Min<<endl;
    numarare(Min);
    cout<<"Valoarea minima apare de "<<num<<" ori";

    return 0;
}
