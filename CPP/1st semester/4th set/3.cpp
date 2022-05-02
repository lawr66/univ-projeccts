#include <iostream>
using namespace std;
int main()
{
    float x[100] , y[100] , Z[100];
    int m , n , k;
    k=0;
    cout << "Introduceti numarul de elemente din primul vector: ";
    cin >> m;
    for(int i=0; i<m; i++)
    {
         cout << "Introduceti elementul [" << i<<"] ";
         cin >>x[i];
    }
    cout << "Introduceti numarul de elemente din al doilea vector: ";
    cin >> n;
    for(int j=0; j<n; j++)
    {
         cout << "Introduceti elementul [" << j<<"] ";
         cin >> y[j];
    }
    for(int i=0; i<m; i++)
    {
         for(int j=0; j<n; j++)
         {
                 if( x[i] == y[j] )
                 {
                                 Z[k] = x[i];
                                 k++;
                 }
         }
    }
    cout << "Intersectia celor doua multimi introduse este:" << endl;
    for(int i=0; i<k; i++)
    {
         cout << Z[i] << "  ";
    }
}
