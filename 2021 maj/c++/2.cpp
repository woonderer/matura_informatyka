#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("instrukcje.txt");
    
    string s;
    char c;
    pair <string, int> ans = {"", 0};
    string prv = "";
    int cur = 0;
    while (in >> s >> c)
    {
        if (prv == s)
        {
            cur++;
            if (cur > ans.second)
                ans = {s, cur};
        }
        else cur = 1;

        prv = s;
    }
    cout << ans.first << ' ' << ans.second << '\n';
}