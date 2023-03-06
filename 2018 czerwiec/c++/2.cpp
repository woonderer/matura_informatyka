#include <iostream>
#include <fstream>
using namespace std;

int dane1[1005][15], dane2[1005][15];

int main()
{
    ifstream in1("dane1.txt");
    ifstream in2("dane2.txt");
    ofstream out("wynik4_2.txt");

    int ans = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int even1 = 0, even2 = 0, odd1 = 0, odd2 = 0;
        for (int j = 1; j <= 10; j++)
        {
            in1 >> dane1[i][j];
            in2 >> dane2[i][j];

            if (dane1[i][j] % 2)
                odd1++;
            else
                even1++;
            
            if (dane2[i][j] % 2)
                odd2++;
            else
                even2++;
            
            if (even1 == 5 && even2 == 5 && odd1 == 5 && odd2 == 5)
                ans++;
        }
    }
    out << ans;
}