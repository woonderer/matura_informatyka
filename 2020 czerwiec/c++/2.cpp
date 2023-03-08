#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("pary.txt");

    int a;
    string s;
    while (in >> a >> s)
    {
        pair <int, char> ans = {1, s[0]};
        char prv = ' ';
        int cur = 0;
        for (char c: s)
        {
            if (c == prv)
            {
                cur++;
                if (cur > ans.first)
                    ans = {cur, c};
            }
            else cur = 1;

            prv = c;
        }

        for (int i = 0; i < ans.first; i++)
            cout << ans.second;
        cout << ' ' << ans.first << '\n';
    }
}