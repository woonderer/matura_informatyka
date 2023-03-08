#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("instrukcje.txt");
    
    string s;
    char c;
    int ans = 0;
    while (in >> s >> c)
    {
        if (s == "DOPISZ")
            ans++;
        else if (s == "USUN")
            ans--;
    }
    cout << ans << '\n';
}