#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream in("liczby.txt");
    
    int n;
    pair <int, int> ans1 = {0, 0}, ans2 = {0, 0};
    while (in >> n)
    {
        int i = 2, cnt = 0, r = 0, _n = n;
        while (n != 1)
        {
            if (n % i == 0)
                r++;

            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            i++;
        }
        if (cnt > ans1.second)
            ans1 = {_n, cnt};
        if (r > ans2.second)
            ans2 = {_n, r};
    }
    cout << ans1.first << ' ' << ans1.second << ' ' << ans2.first << ' ' << ans2.second << '\n';
}