#include<iostream>
using namespace std;

int main()
{
    float GB, TB, MB, KB, B;
    cout<<"Introduceti o dimensiune in GB."; cin>>GB;
    TB=GB/1024;
    MB=GB*1024;
    KB=MB*1024;
    B=KB*1024;
    cout<<"Dimensiunea, transformata in TB: "<<TB<<endl;
    cout<<"Dimensiunea, transformata in MB: "<<MB<<endl;
    cout<<"Dimensiunea, transformata in KB: "<<KB<<endl;
    cout<<"Dimensiunea, transformata in B: "<<B<<endl;
    return 0;
}
