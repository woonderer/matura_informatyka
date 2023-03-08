#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string ident[200];

int main()
{
    ifstream in("identyfikator.txt");
    ofstream out("wyniki4_1.txt");
    
    for (int i = 0; i < 200; i++)
        in >> ident[i];
    
    int ans = 0;
    for (int i = 0; i < 200; i++)
    {
        int cur = 0;
        for (int j = 3; j < ident[i].size(); j++)
            cur += ident[i][j] - '0';

        if (cur > ans)
            ans = cur;
    }

    for (int i = 0; i < 200; i++)
    {
        int cur = 0;
        for (int j = 3; j < ident[i].size(); j++)
            cur += ident[i][j] - '0';

        if (cur == ans)
            out << ident[i] << '\n';
    }
}