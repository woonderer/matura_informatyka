#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("liczby.txt");
    ofstream out("wyniki_6_2.txt");

    int ans = 0;
    for (int i = 1; i <= 999; i++)
    {
        string s;
        in >> s;
        if (s[s.size() - 1] == '4')
        {
            bool good = true;
            for (int j = 0; j < s.size() - 1; j++)
            {
                if (s[j] == '0')
                {
                    good = false;
                    break;
                }
            }
            if (good)
                ans++;
        }
    }
    out << ans;
}