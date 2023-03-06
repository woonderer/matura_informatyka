#include <iostream>
#include <fstream>
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
    ifstream in("liczby.txt");
    ofstream out("wyniki4_1.txt");

    for (int i = 1; i <= 300; i++)
    {
        int a;
        in >> a;
        if (a >= 100 && a <= 5000 && is_prime(a))
            out << a << '\n';
    }
}