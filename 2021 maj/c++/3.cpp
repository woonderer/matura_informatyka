#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int cnt[333];

int main()
{
    ifstream in("instrukcje.txt");
    
    string s;
    char c;
    while (in >> s >> c)
    {
        if (s == "DOPISZ")
        {
            cnt[c]++;
        }
    }
    char ans = 'A';
    for (char c = 'B'; c <= 'Z'; c++)
        if (cnt[c] > cnt[ans])
            ans = c;
    cout << ans << ' ' << cnt[ans] << '\n';
}