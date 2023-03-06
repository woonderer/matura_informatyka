#include <iostream>
#include <fstream>
using namespace std;

int row[321];

bool pal()
{
    for (int i = 0; i < 160; i++)
        if (row[i] != row[319 - i])
            return false;
    return true;
}

int main()
{
    ifstream in("dane.txt");

    int ans = 0;
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 320; j++)
        {
            in >> row[j];
        }
        ans += !pal();
    }

    cout << ans << '\n';
}
