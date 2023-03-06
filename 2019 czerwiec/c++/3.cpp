#include <iostream>
#include <fstream>
using namespace std;

int waga(int n)
{
    if (n < 10)
        return n;
    int ans = 0;
    while (n)
    {
        ans += n % 10;
        n /= 10;
    }
    return waga(ans);
}

int main()
{
    ifstream in("pierwsze.txt");
    ofstream out("wyniki4_3.txt");

    int ans = 0;
    for (int i = 1; i <= 200; i++)
    {
        int a;
        in >> a;
        if (waga(a) == 1)
            ans++;
    }
    out << ans;
}