#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("instrukcje.txt");
    
    string s, ans;
    char c;
    while (in >> s >> c)
    {
        if (s == "DOPISZ")
            ans.push_back(c);
        else if (s == "ZMIEN")
            ans[ans.size() - 1] = c;
        else if (s == "USUN")
            ans.pop_back();
        else if (s == "PRZESUN")
        {
            unsigned long long idx = ans.find(c);
            if (idx == string::npos)
                continue;
            if (c == 'Z')
                ans[idx] = 'A';
            else
                ans[idx]++;
        }
    }
    cout << ans << '\n';
}