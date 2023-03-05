#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("dane_6_1.txt");
    ofstream out("wyniki_6_1.txt");

    for (int i = 1; i <= 100; i++)
    {
        string s;
        in >> s;
        for (char c: s)
            out << char('A' + (c - 'A' + 107) % 26);
        out << '\n';
    }
}