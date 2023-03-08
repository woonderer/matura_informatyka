#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    ifstream in("liczby.txt");
    
    string s;
    pair <int, int> ans = {0, 0};
    while (in >> s)
    {
        int n = stoi(s);
        reverse(s.begin(), s.end());
        if (abs(n - stoi(s)) > ans.second)
            ans = {n, abs(n - stoi(s))};
    }
    cout << ans.first << ' ' << ans.second << '\n';
}