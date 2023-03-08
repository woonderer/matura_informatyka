#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ifstream in("pary.txt");

    int a;
    string s;
    while (in >> a >> s)
    {
        if (a % 2 == 0)
        {
            int i = 3;
            while (!is_prime(i) || !is_prime(a - i))
                i++;
            cout << a << ' ' << i << ' ' << a - i << '\n';
        }
    }
}