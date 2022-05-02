#include<iostream>
using namespace std;
int main()
{
 float X[100];
 int i, j, n, pahar;
 //citirea vectorului
 cout<<"Cate elemente sunt in vector? n = "; cin>>n;
 for(i=0;i<n;i++)
 {
 cout<<"X["<<i<<"] = "; cin>>X[i];
 }
 //afisarea vectorului
 cout<<"X = { ";
 for(i=0;i<n;i++)
 {
 if(i==n-1) cout<<X[i]<<" }";
 else cout<<X[i]<<", ";
 }
 //intercalarea mediei aritmetice
 for(i=n-1;i>0;i--)
 {
 n++;
 for(j=n-1;j>i;j--)
 X[j]=X[j-1];
 X[i]=(X[i+1]+X[i-1])/2;
 }
 //afisarea vectorului nou
 cout<<"\nX = { ";
  for(i=0;i<n;i++)
 {
 if(i==n-1) cout<<X[i]<<" }";
 else cout<<X[i]<<", ";
 }
 return 0;
 }

