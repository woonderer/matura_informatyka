#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool is_pal(const string& s)
{
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}

int main()
{
    ifstream in("napisy.txt");
    
    string s;
    while (in >> s)
    {
        if (is_pal(s + s[0]))
            cout << s[s.size() / 2];
        else if (is_pal(s[s.size() - 1] + s))
            cout << s[s.size() / 2 - 1];
    }
}