#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string ident[200];

bool is_pal(const string& s)
{
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}

int main()
{
    ifstream in("identyfikator.txt");
    ofstream out("wyniki4_2.txt");
    
    for (int i = 0; i < 200; i++)
        in >> ident[i];
    
    for (int i = 0; i < 200; i++)
    {
        if (is_pal(ident[i].substr(0, 3)) || is_pal(ident[i].substr(3)))
            out << ident[i] << '\n';
    }
}