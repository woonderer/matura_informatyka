#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector <pair <int, string>> tab;

int main()
{
    ifstream in("pary.txt");
    
    for (int i = 0; i < 100; i++)
    {
        int a;
        string s;
        in >> a >> s;
        if (a == s.size()) tab.push_back({a, s});
    }
    
    sort(tab.begin(), tab.end());
    cout << tab[0].first << ' ' << tab[0].second << '\n';
}
