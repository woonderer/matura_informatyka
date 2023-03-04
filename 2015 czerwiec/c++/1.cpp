#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("kody.txt");
    ofstream out("kody1.txt");

    for (int linia = 1; linia <= 500; linia++)
    {
        string s;
        in >> s;
        int even = 0, odd = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if ((i + 1) % 2)
                odd += s[i] - '0';
            else
                even += s[i] - '0';
        }
        out << even << ' ' << odd << '\n';
    }    
}