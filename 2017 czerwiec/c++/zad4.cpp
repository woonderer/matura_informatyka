#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("punkty.txt");

    int ins = 0, b = 0, outs = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int x, y;
        in >> x >> y;

        if (x < 5000 && y < 5000)
            ins++;
        else if (x > 5000 || y > 5000)
            outs++;
        else
            b++;
    }
    cout << ins << ' ' << b << ' ' << outs << '\n';
}