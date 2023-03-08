#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("napisy.txt");
    
    string s;
    int ans = 0;
    while (in >> s)
    {
        for (char c: s)
            if (c >= '0' && c <= '9')
                ans++;
    }
    cout << ans << '\n';
}