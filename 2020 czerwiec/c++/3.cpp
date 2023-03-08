#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

pair <int, string> tab[100];

int main()
{
    ifstream in("pary.txt");
    
    for (int i = 0; i < 100; i++)
        in >> tab[i].first >> tab[i].second;
    
    sort(tab, tab + 100);
    cout << tab[0].first << ' ' << tab[0].second << '\n';
}