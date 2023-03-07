#include <iostream>
#include <fstream>
using namespace std;

int a[1005];

int main()
{
    ifstream in("dane4.txt");

    for (int i = 1; i <= 1000; i++)
        in >> a[i];
    
    int i = 1, best = 0, head = 0, tail = 0;
    while (i < 1000)
    {
        int j = i + 1, r = abs(a[i] - a[j]);
        while (j + 1 <= 1000 && r == abs(a[j] - a[j + 1])) j++;

        if (j - i + 1 > best)
        {
            best = j - i + 1;
            head = a[i];
            tail = a[j];
        }

        i = j;
    }
    cout << "Dlugosc: " << best << '\n';
    cout << "Wartosc na poczatku: " << head << '\n';
    cout << "Wartosc na koncu: " << tail << '\n';
}