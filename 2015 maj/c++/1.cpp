#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream in("liczby.txt");

    string s;
    int ans = 0;
    for (int line = 1; line <= 1000; line++)
    {
        in >> s;
        int cur = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '0')
                cur++;
        if (cur > s.size() - cur)
            ans++;
    }
    cout << ans << '\n';
}