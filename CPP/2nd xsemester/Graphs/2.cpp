# include <iostream>
using namespace std;

int main()
{
    int n, A[30][30], v[30], i, j, k, m;
    cout<<"Introduceti numarul de noduri din graf:"; cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            if(i==j) A[i][j]=0;
            else
                {
                    cout<<"A["<<i<<"]["<<j<<"]= "; cin>>A[i][j];
                }
        }
        cout<<"Matricea de adiacenta a grafului este este:"<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<endl;
            for(j=1;j<=n;j++)
                cout<<A[i][j]<<" ";
        }
    cout<<endl<<"Introduceti varful ai carui vecini doriti sa-i fie afisati: "; cin>>k;
    if(k<1 || k>n)
    {
        cout<<"Ati introdus un varf incorect. Va rog introduceti un varf intre 1 si "<<n<<". ";
        cin>>n;
    }
    m=0;
    for(i=1;i<=n;i++)
        if (A[i][k]==1 || A[k][i]==1)
            {
                m++;
                v[m]=i;
            }
    cout<<endl<<"Vecinii lui "<<k<<" sunt: ";
    for(i=1;i<=m;i++)
        cout<<v[i]<<" ";
}
