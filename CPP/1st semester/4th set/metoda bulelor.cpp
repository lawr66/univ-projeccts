#include<iostream>
using namespace std;

int main()
{
    int x[50], i, n, ok, y;
    cout<<"Introduceti numarul de elemente din vector. "; cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Introduceti elementul "<<i<<". ";
        cin>>x[i];
    }
    cout<<"Vectorul introdus: ";
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";

    do{
 	ok=1;
 	for(i=0; i<n-1; i++)
 		if(x[i]>x[i+1])
 			{
 				ok=0;
 	 			y=x[i];
 				x[i]=x[i+1];
 				x[i+1]=y;
 			}
   }while(ok==0);

    cout<<endl<<"Vectorul modificat: ";
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";

}
