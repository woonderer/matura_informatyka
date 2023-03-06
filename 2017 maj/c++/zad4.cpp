#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int tab[201][321];

int main()
{
    ifstream in("dane.txt");

    for (int i = 1; i <= 200; i++)
        for (int j = 1; j <= 320; j++)
            in >> tab[i][j];
    
    for (int i = 1; i <= 200; i++)
        tab[i][0] = -1;
    
    int ans = 0;
    for (int i = 1; i <= 320; i++)
    {
        int cur = 0;
        for (int j = 1; j <= 200; j++)
        {
            if (tab[j - 1][i] == tab[j][i]) cur++;
            else
            {
                ans = max(ans, cur);
                cur = 1;
            }
        }
        ans = max(ans, cur);
    }
    cout << ans << '\n';
}