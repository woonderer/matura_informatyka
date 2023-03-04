#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("kody.txt");
    ofstream out("kody2.txt");

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
        int r = (10 - (even * 3 + odd) % 10) % 10;
        out << r << ' ';
        switch (r)
        {
            case 0:
                out << "10101110111010\n";
                break;
            case 1:
                out << "11101010101110\n";
                break;
            case 2:
                out << "10111010101110\n";
                break;
            case 3:
                out << "11101110101010\n";
                break;
            case 4:
                out << "10101110101110\n";
                break;
            case 5:
                out << "11101011101010\n";
                break;
            case 6:
                out << "10111011101010\n";
                break;
            case 7:
                out << "10101011101110\n";
                break;
            case 8:
                out << "11101010111010\n";
                break;
            case 9:
                out << "10111010111010\n";
                break;
        }
    }    
}