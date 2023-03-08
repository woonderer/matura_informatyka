#include <iostream>
#include <fstream>
using namespace std;

int cnt[10000];

int main()
{
    ifstream in("liczby.txt");
    
    int n;
    while (in >> n)
    {
        cnt[n]++;
    }

    int ans1 = 0, ans2 = 0, ans3 = 0;
    for (int i = 11; i < 10000; i += 2)
    {
        if (cnt[i] > 0)
            ans1++;
        
        if (cnt[i] == 2)
            ans2++;
        else if (cnt[i] == 3)
            ans3++;
    }
    cout << ans1 << ' ' << ans2 << ' ' << ans3 << '\n';
}