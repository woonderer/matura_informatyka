#include <iostream>
#include <fstream>
using namespace std;

bool cyfra1[10], cyfra2[10];

int main()
{
    ifstream in("punkty.txt");

    int ans = 0;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            cyfra1[j] = false;
            cyfra2[j] = false;
        }
        string x, y;
        in >> x >> y;

        for (char c: x)
            cyfra1[c - '0'] = true;
        for (char c: y)
            cyfra2[c - '0'] = true;

        bool good = true;
        for (int j = 0; j <= 9; j++)
        {
            if (cyfra1[j] != cyfra2[j])
            {
                good = false;
                break;
            }
        }

        if (good)
            ans++;
    }
    cout << ans << '\n';
}
