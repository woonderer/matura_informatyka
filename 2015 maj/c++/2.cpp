#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream in("liczby.txt");

    string s;
    int two = 0, eight = 0;
    for (int line = 1; line <= 1000; line++)
    {
        in >> s;
        if (s[s.size() - 1] == '0')
            two++;
        if (s.size() > 3 && s[s.size() - 1] == '0' && s[s.size() - 2] == '0' && s[s.size() - 3] == '0')
            eight++;
    }
    cout << two << ' ' << eight << '\n';
}