#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string int_to_kresk(int r)
{
    switch (r)
    {
        case 0:
            return "10101110111010";
        case 1:
            return "11101010101110";
        case 2:
            return "10111010101110";
        case 3:
            return "11101110101010";
        case 4:
            return "10101110101110";
        case 5:
            return "11101011101010";
        case 6:
            return "10111011101010";
        case 7:
            return "10101011101110";
        case 8:
            return "11101010111010";
        case 9:
            return "10111010111010";
    }
    return "";
}

int main()
{
    ifstream in("kody.txt");
    ofstream out("kody3.txt");

    for (int linia = 1; linia <= 500; linia++)
    {
        out << "11011010";
        string s;
        in >> s;
        int even = 0, odd = 0;
        for (int i = 0; i < s.size(); i++)
        {
            out << int_to_kresk(s[i] - '0');
            if ((i + 1) % 2)
                odd += s[i] - '0';
            else
                even += s[i] - '0';
        }
        int r = (10 - (even * 3 + odd) % 10) % 10;
        out << int_to_kresk(r) << '\n';
    }    
}