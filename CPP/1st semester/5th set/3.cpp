#include<iostream>
using namespace std;

int main()
{
    int matrice[30][30];
    int numar = 2;
    int n;
    cout<<"n=";
    cin>>n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrice[i][j] = numar;
            numar = numar + 2;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<matrice[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
