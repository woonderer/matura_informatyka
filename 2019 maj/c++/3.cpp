#include <iostream>
#include <fstream>
using namespace std;

int a[505];

struct ciag
{
    int first;
    int len;
    int gcd;
};

int nwd(int a, int b)
{
    if (b == 0)
        return a;
    return nwd(b, a % b);
}

int main()
{
    ifstream in("liczby.txt");
    
    for (int i = 1; i <= 500; i++)
        in >> a[i];
    
    ciag ans = {0, 0, 0};
    for (int i = 1; i <= 500; i++)
    {
        ciag cur = {a[i], 1, a[i]};
        int j = i + 1;
        while (j <= 500 && nwd(cur.gcd, a[j]) != 1)
        {
            cur.gcd = nwd(cur.gcd, a[j]);
            cur.len++;
            j++;
        }
        if (cur.len > ans.len)
            ans = cur;
    }

    cout << ans.first << ' ' << ans.len << ' ' << ans.gcd << '\n';
}