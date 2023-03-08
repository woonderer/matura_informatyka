#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("napisy.txt");
    
    string s;
    for (int i = 1; i <= 1000; i++)
    {
        in >> s;
        if (i % 20 == 0)
            cout << s[i / 20 - 1];
    }
}