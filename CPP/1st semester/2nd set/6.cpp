#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"Introduceti coordonata x unui punct."; cin>>x;
    cout<<"Introduceti coordonata y unui punct."; cin>>y;
    if(x>0 && y>0) cout<<"Punctul este in primul cadran.";
    if(x<0 && y>0) cout<<"Punctul este in al doilea cadran.";
    if(x<0 && y<0) cout<<"Punctul este in al treilea cadran.";
    if(x>0 && y<0) cout<<"Punctul este in al patrulea cadran.";
    if(x==0 && y>0) cout<<"Punctul este pe axa Oy";
    if(x==0 && y<0) cout<<"Punctul este pe axa Oy'";
    if(x>0 && y==0) cout<<"Punctul este pe axa Ox";
    if(x<0 && y==0) cout<<"Punctul este pe axa Ox'";
    if(x==0 && y==0) cout<<"Punctul este in origine.";
    return 0;
}
