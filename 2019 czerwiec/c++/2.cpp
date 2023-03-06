#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ifstream in("pierwsze.txt");
    ofstream out("wyniki4_2.txt");

    for (int i = 1; i <= 200; i++)
    {
        string a;
        in >> a;
        reverse(a.begin(), a.end());
        if (is_prime(stoi(a)))
        {
            reverse(a.begin(), a.end());
            out << a << '\n';
        }
    }
}