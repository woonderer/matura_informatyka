#include <iostream>
#include <fstream>
#include <set>
using namespace std;


int main()
{
    ifstream in("sygnaly.txt");

    pair <string, int> ans = {"", 0};
    for (int i = 1; i <= 1000; i++)
    {
        string s;
        in >> s;
        set <char> st;
        for (char c: s)
            st.insert(c);
        if (st.size() > ans.second)
            ans = {s, st.size()};
    }
    cout << ans.first << ' ' << ans.second << '\n';
}