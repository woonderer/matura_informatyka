#include <iostream>
#include <fstream>
using namespace std;

bool is_prime[10001];

int main()
{
    ifstream in("punkty.txt");

    for (int i = 2; i <= 10000; i++)
        is_prime[i] = true;
    
    for (int i = 2; i <= 10000; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= 10000; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int x, y;
        in >> x >> y;
        ans += (is_prime[x] && is_prime[y]);
    }
    cout << ans << '\n';
}
