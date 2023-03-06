#include <iostream>
#include <fstream>
using namespace std;

int dane1[1005][15], dane2[1005][15];

int main()
{
    ifstream in1("dane1.txt");
    ifstream in2("dane2.txt");
    ofstream out("wynik4_1.txt");

    int ans = 0;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            in1 >> dane1[i][j];
            in2 >> dane2[i][j];

            if (j == 10 && dane1[i][j] == dane2[i][j])
                ans++;
        }
    }
    out << ans;
}