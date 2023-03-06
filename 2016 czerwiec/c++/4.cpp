#include <iostream>
#include <fstream>
#include <string>
using namespace std;

long long to_ten(const string& s)
{
    long long ans = 0;
    long long a = 1;
    for (int i = s.size() - 2; i >= 0; i--)
    {
        ans += (s[i] - '0') * a;
        a *= 8;
    }
    return ans;
}

int main()
{
    ifstream in("liczby.txt");
    ofstream out("wyniki_6_4.txt");

    int ans = 0;
    for (int i = 1; i <= 999; i++)
    {
        string s;
        in >> s;
        if (s[s.size() - 1] == '8')
            ans += to_ten(s);
    }
    out << ans;
}