#include <iostream>
#include <fstream>
#include <set>
using namespace std;

set <int> s;

int main()
{
    ifstream in("liczby.txt");
    
    for (int i = 1; i <= 100000; i *= 3)
        s.insert(i);
    
    int ans = 0;
    for (int i = 1; i <= 500; i++)
    {
        int a;
        in >> a;
        if (s.count(a))
            ans++;
    }
    cout << ans << '\n';
}