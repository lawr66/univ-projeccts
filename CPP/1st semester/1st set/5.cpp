#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float xa, ya, xb, yb, AB;
    cout<<"Introduceti coordinata x a punctului A."; cin>>xa;
    cout<<"Introduceti coordinata y a punctului A."; cin>>ya;
    cout<<"Introduceti coordinata x a punctului B."; cin>>xb;
    cout<<"Introduceti coordinata y a punctului B."; cin>>yb;
    AB=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    cout<<"Lungimea segmentului AB este: "<<AB;
    return 0;
}
