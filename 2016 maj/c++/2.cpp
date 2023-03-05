#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("dane_6_2.txt");
    ofstream out("wyniki_6_2.txt");

    for (int i = 1; i <= 3000; i++)
    {
        string line;
        getline(in, line);
        
        string s, key;
        int k = 0;
        bool slowo = true;
        for (char c: line)
        {
            if (c == ' ')
            {
                slowo = false;
                continue;
            }
            if (slowo)
                s.push_back(c);
            else
                key.push_back(c);
        }
        if (key.size() > 0)
            k = stoi(key);

        for (char c: s)
            out << char('A' + ((c - 'A' - k) % 26 + 26) % 26);
        out << '\n';
    }
}