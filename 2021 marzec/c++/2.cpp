#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

string kraj[50], miasto[50];
int sklep[50][140];
pair <int, string> ans[50];

int main()
{
    ifstream in("galerie.txt");
    ofstream outa("wynik4_2a.txt");
    ofstream outb("wynik4_2b.txt");
    
    for (int i = 0; i < 50; i++)
    {
        in >> kraj[i] >> miasto[i];
        for (int j = 0; j < 140; j++)
            in >> sklep[i][j];
    }

    for (int i = 0; i < 50; i++)
    {
        int p = 0, l = 0;
        for (int j = 0; j < 140; j += 2)
        {
            int cur = sklep[i][j] * sklep[i][j + 1];
            if (cur == 0)
                break;
            p += cur;
            l++;
        }
        ans[i] = {p, miasto[i]};
        outa << miasto[i] << ' ' << p << ' ' << l << '\n';
    }

    sort(ans, ans + 50);
    outb << ans[49].second << ' ' << ans[49].first << '\n';
    outb << ans[0].second << ' ' << ans[0].first;
}