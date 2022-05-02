#include<iostream>
using namespace std;

int main()
{
    float x[50], mp=0, mn=0;
    int n, i, k=0;
    cout<<"Introduceti in cate zile au fost masurate temperaturile: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Introduceti temperatura masurata in ziua "<<i<<" ";
        cin>>x[i];
    }
    for(i=1; i<=n; i++)
        if(x[i]>=0)
    {
        mp=mp+x[i];
        k++;
    }
    if(k==0) cout<<"Nu au fost introduse temperaturi pozitive."<<endl;
    else
    {
        mp=mp/k;
        cout<<"Media temperaturilor pozitive este: "<<mp<<endl;
    }
    k=0;
    for(i=1; i<=n; i++)
        if(x[i]<0)
    {
        mn=mn+x[i];
        k++;
    }
    if(k==0) cout<<"Nu au fost introduse temperaturi negative.";
    else
    {
        mn=mn/k;
        cout<<"Media temperaturilor negative este: "<<mn;
    }
}
