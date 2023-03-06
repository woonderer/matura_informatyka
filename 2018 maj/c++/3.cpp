#include <iostream>
#include <fstream>
using namespace std;


bool valid(const string& s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (abs(s[i] - s[j]) > 10)
                return false;
        }
    }
    return true;
}

int main()
{
    ifstream in("sygnaly.txt");

    for (int i = 1; i <= 1000; i++)
    {
        string s;
        in >> s;
        if (valid(s))
            cout << s << '\n';
    }
}