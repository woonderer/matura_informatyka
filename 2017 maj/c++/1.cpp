#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


int main()
{
    ifstream in("dane.txt");

    int maxx = -1, minx = 256;
    for (int i = 1; i <= 200; i++)
    {
        for (int j = 1; j <= 320; j++)
        {
            int a;
            in >> a;
            maxx = max(maxx, a);
            minx = min(minx, a);
        }
    }

    cout << maxx << ' ' << minx << '\n';
}
