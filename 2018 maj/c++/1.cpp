#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream in("sygnaly.txt");

    string ans;
    for (int i = 1; i <= 1000; i++)
    {
        string s;
        in >> s;
        if (i % 40 == 0)
            ans.push_back(s[9]);
    }
    cout << ans << '\n';
}