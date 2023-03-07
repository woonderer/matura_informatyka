#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
using namespace std;

int a[1005];
map <int, int> m;

int main()
{
    ifstream in("dane4.txt");

    for (int i = 1; i <= 1000; i++)
        in >> a[i];
    
    for (int i = 2; i <= 1000; i++)
        m[abs(a[i] - a[i - 1])]++;
    
    int best = 0;
    for (pair <int, int> x: m)
        best = max(best, x.second);

    cout << "Krotnosc najczestszej luki: " << best << '\n';    
    cout << "Wartosci najczestszych luk:\n";
    for (pair <int, int> x: m)
        if (x.second == best) cout << x.first << '\n';
}