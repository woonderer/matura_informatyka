#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int a[200];

bool trojka(int x, int y, int z)
{
    if (y % x != 0)
        return false;
    if (z % y != 0)
        return false;

    return true;
}

int main()
{
    ifstream in("liczby.txt");
    ofstream out("trojki.txt");

    for (int i = 0; i < 200; i++)
        in >> a[i];
    sort(a, a + 200);

    vector <pair <int, int>> three;
    for (int x = 0; x < 200; x++)
    {
        for (int y = x + 1; y < 200; y++)
        {
            for (int z = y + 1; z < 200; z++)
            {
                if (trojka(a[x], a[y], a[z]))
                {
                    out << a[x] << ' ' << a[y] << ' ' << a[z] << '\n';
                    three.push_back({a[x], a[z]});
                }
            }
        }
    }
    cout << "a) " << three.size() << '\n';

    int ans = 0;
    sort(three.begin(), three.end());
    for (int i = 0; i < three.size() - 1; i++)
    {
        for (int j = i + 1; j < three.size(); j++)
        {
            if (three[i].second == three[j].first)
                ans++;
        }
    }
    cout << "b) " << ans << '\n';
}