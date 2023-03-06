#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("liczby.txt");
    ofstream out("wyniki_6_1.txt");

    int ans = 0;
    for (int i = 1; i <= 999; i++)
    {
        string s;
        in >> s;
        if (s[s.size() - 1] == '8')
            ans++;
    }
    out << ans;
}