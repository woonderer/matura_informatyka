#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ifstream in("liczby.txt");
    
    string s;
    while (in >> s)
    {
        int n = stoi(s);
        reverse(s.begin(), s.end());
        if (is_prime(n) && is_prime(stoi(s)))
            cout << n << '\n';
    }
}