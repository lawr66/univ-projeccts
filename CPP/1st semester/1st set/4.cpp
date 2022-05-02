#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int sec;
    float hr, min, ms, ns;
    cout<<"Introduceti un numar de secunde."; cin>>sec;
    hr=sec/3600.0;
    min=sec/60.0;
    ms=sec*pow(10,3);
    ns=sec*pow(10,9);
    cout<<"Valoarea secundelor in ore: "<<hr<<endl;
    cout<<"Valoarea secundelor in minute: "<<min<<endl;
    cout<<"Valoarea secundelor in milisecunde: "<<ms<<endl;
    cout<<"Valoarea secundelor in nanosecunde: "<<ns;
    return 0;
}
