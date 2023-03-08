#include <iostream>
#include <fstream>
#include <list>
#include <set>
using namespace std;

list <int> lucky;
set <int> s;

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
    ifstream in("dane.txt");
    
    for (int i = 1; i <= 10000; i += 2)
        lucky.push_back(i);
    
    list <int>::iterator cur = lucky.begin();
    cur++;
    while (cur != lucky.end())
    {
        int l = *cur, i = 1;
        for (list <int>::iterator it = lucky.begin(); it != lucky.end(); it++)
        {
            if (i++ % l == 0)
            {
                list <int>::iterator tmp = --it;
                it++;
                lucky.erase(it);
                it = tmp;
            }
        }
        cur++;
    }

    for (int v: lucky)
        s.insert(v);
    
    int n, ans = 0;
    while (in >> n)
    {
        if (s.count(n) && is_prime(n))
            ans++;        
    }   
    cout << ans << '\n';
}