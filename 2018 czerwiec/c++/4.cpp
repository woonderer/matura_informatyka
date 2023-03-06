#include <iostream>
#include <fstream>
using namespace std;

int dane1[1005][15], dane2[1005][15];

int main()
{
    ifstream in1("dane1.txt");
    ifstream in2("dane2.txt");
    ofstream out("wynik4_4.txt");

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            in1 >> dane1[i][j];
            in2 >> dane2[i][j];
        }
        int a = 1, b = 1;
        while (a <= 10 && b <= 10)
        {
            if (dane1[i][a] <= dane2[i][b])
            {
                out << dane1[i][a] << ' ';
                a++;
            }
            else
            {
                out << dane2[i][b] << ' ';
                b++;
            }
        }

        while (a <= 10)
            out << dane1[i][a++] << ' ';
        
        while (b <= 10)
            out << dane2[i][b++] << ' ';

        out << '\n';
    }    
}