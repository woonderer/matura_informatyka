#include <iostream>
#include <fstream>
using namespace std;

int silnia[10];

int rozbicie(int n)
{
    int ans = 0;
    while (n)
    {
        ans += silnia[n % 10];
        n /= 10;
    }
    return ans;
}

int main()
{
    ifstream in("liczby.txt");
    
    silnia[0] = 1;
    for (int i = 1; i <= 9; i++)
        silnia[i] = silnia[i - 1] * i;
    
    for (int i = 1; i <= 500; i++)
    {
        int a;
        in >> a;
        if (a == rozbicie(a))
            cout << a << '\n';
    }
}