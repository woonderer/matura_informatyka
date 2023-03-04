#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


int main()
{
    ifstream in("liczby.txt");

    string s[1001];
    int smallest = 1, biggest = 1;
    for (int line = 1; line <= 1000; line++)
    {
        in >> s[line];

        // check if smaller
        if (s[line].size() < s[smallest].size())
            smallest = line;
        else if (s[line].size() == s[smallest].size())
        {
            for (int i = 0; i < s[line].size(); i++)
            {
                if (s[line][i] != s[smallest][i])
                {
                    if (s[line][i] == '0')
                        smallest = line;
                    break;
                }
            }
        }

        // check if bigger
        if (s[line].size() > s[biggest].size())
            biggest = line;
        else if (s[line].size() == s[biggest].size())
        {
            for (int i = 0; i < s[line].size(); i++)
            {
                if (s[line][i] != s[biggest][i])
                {
                    if (s[line][i] == '1')
                        biggest = line;
                    break;
                }
            }
        }
    }
    cout << smallest << ' ' << biggest << '\n';
}