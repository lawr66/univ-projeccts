#include<iostream>
using namespace std;

struct muchie
{
    int a, b;
    int cost;
}v[20],x;

int main()
{
    int n, m, i, j, r=0, cost_total=0, c[20];
    cout<<"Introduceti numarul de varfuri. "; cin>>n;
    cout<<"Introduceti numarul de muchii. "; cin>>m;
    for(i=1; i<=m; i++)
    {
        cout<<"Introduceti prima extremitate a muchiei "<<i<<" "; cin>>v[i].a;
        cout<<"Introduceti a doua extremitate a muchiei "<<i<<" "; cin>>v[i].b;
        cout<<"Introduceti costul muchiei "<<i<<" "; cin>>v[i].cost;
    }
    for(i=1; i<=n; i++)
        c[i]=i;
    for(i=1; i<m; i++)
        for(j=1; j<=n; j++)
            if(v[i].cost>v[j].cost)
    {
        x=v[i];
        v[i]=v[j];
        v[j]=x;
    }
    i=1;
    while(r<n-1)
    {
        if(c[v[i].a]!=c[v[i].b])
        {
            r++;
            cost_total=cost_total+v[i].cost;
            for(j=1; j<=n; j++)
                if(c[j]==c[v[i].a])
                    c[j]=c[v[i].b];
            cout<<v[i].a<<" "<<v[i].b<<endl;
        }
        i++;
    }
    cout<<"Costul total: "<<cost_total;
}
