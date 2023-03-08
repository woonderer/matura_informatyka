#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    ifstream in("liczby.txt");
    
    string s;
    while (in >> s)
    {
        reverse(s.begin(), s.end());
        if (stoi(s) % 17 == 0)
            cout << s << '\n';
    }
}