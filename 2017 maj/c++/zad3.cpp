#include <iostream>
#include <fstream>
using namespace std;

int tab[201][321];

bool kontr(int i, int j)
{
    if (i - 1 > 0 && abs(tab[i - 1][j] - tab[i][j]) > 128)
        return true;
    if (i + 1 <= 200 && abs(tab[i + 1][j] - tab[i][j]) > 128)
        return true;
    if (j - 1 > 0 && abs(tab[i][j - 1] - tab[i][j]) > 128)
        return true;
    if (j + 1 <= 320 && abs(tab[i][j + 1] - tab[i][j]) > 128)
        return true;
    return false;
}

int main()
{
    ifstream in("dane.txt");

    for (int i = 1; i <= 200; i++)
        for (int j = 1; j <= 320; j++)
            in >> tab[i][j];
    
    int ans = 0;
    for (int i = 1; i <= 200; i++)
        for (int j = 1; j <= 320; j++)
            ans += kontr(i, j);

    cout << ans << '\n';
}