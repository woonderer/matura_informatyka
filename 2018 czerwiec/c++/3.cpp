#include <iostream>
#include <fstream>
#include <set>
#include <vector>
using namespace std;

int dane1[1005][15], dane2[1005][15];

bool check(set <int>& s1, set <int>& s2)
{
    for (int v: s1)
        if (!s2.count(v))
            return false;
    return true;
}

int main()
{
    ifstream in1("dane1.txt");
    ifstream in2("dane2.txt");
    ofstream out("wynik4_3.txt");

    vector <int> ans;
    for (int i = 1; i <= 1000; i++)
    {
        set <int> s1, s2;
        for (int j = 1; j <= 10; j++)
        {
            in1 >> dane1[i][j];
            in2 >> dane2[i][j];

            s1.insert(dane1[i][j]);
            s2.insert(dane2[i][j]);

        }
        if (s1.size() == s2.size() && check(s1, s2))
            ans.push_back(i);
    }
    out << ans.size() << '\n';
    for (int v: ans)
        out << v << ' ';
}