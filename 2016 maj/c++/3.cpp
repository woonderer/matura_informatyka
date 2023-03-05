#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string encode(string s, int k)
{
    string ans;
    for (char c: s)
        ans.push_back(char('A' + (c - 'A' + k) % 26));
    return ans;
}

bool valid(string s1, string s2)
{
    for (int k = 0; k < 26; k++)
        if (encode(s1, k) == s2)
            return true;
    return false;
}

int main()
{
    ifstream in("dane_6_3.txt");
    ofstream out("wyniki_6_3.txt");

    for (int i = 1; i <= 3000; i++)
    {
        string s1, s2;
        in >> s1 >> s2;
        if (!valid(s1, s2))
            out << s1 << '\n';
    }
}