#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream in("liczby.txt");
    
    string s, ans;
    int cnt = 0;
    while (in >> s)
    {
        if (s[0] == s[s.size() - 1])
        {
            cnt++;
            if (ans.size() == 0)
                ans = s;
        }
    }
    cout << cnt << ' ' << ans << '\n';
}