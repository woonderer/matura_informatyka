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
        a *= (s[s.size() - 1] - '0');
    }
    return ans;
}

int main()
{
    ifstream in("liczby.txt");
    ofstream out("wyniki_6_5.txt");

    int minx = 1, maxx = 1;
    string s[1001];
    for (int i = 1; i <= 999; i++)
    {
        in >> s[i];
        if (to_ten(s[i]) > to_ten(s[maxx]))
            maxx = i;
        if (to_ten(s[i]) < to_ten(s[minx]))
            minx = i;
    }
    out << "Najmniejsza: " << s[minx] << ", " << to_ten(s[minx]) << '\n';
    out << "Najwieksza: " << s[maxx] << ", " << to_ten(s[maxx]) << '\n';
}