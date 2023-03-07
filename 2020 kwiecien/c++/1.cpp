#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int a[1005];

int main()
{
    ifstream in("dane4.txt");

    for (int i = 1; i <= 1000; i++)
        in >> a[i];
    
    int maxx = 0, minx = 2e9;
    for (int i = 2; i <= 1000; i++)
    {
        maxx = max(maxx, abs(a[i] - a[i - 1]));
        minx = min(minx, abs(a[i] - a[i - 1]));
    }

    cout << "Najwieksza: " << maxx << '\n';
    cout << "Najemniejsza: " << minx << '\n';
}