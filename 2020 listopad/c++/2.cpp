#include <iostream>
#include <fstream>
#include <list>
#include <set>
using namespace std;

list <int> lucky;
set <int> s;

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
    
    int n;
    pair <int, int> ans = {0, 0}, akt = {0, 0};
    bool was = false;
    while (in >> n)
    {
        if (s.count(n))
        {
            if (was)
                akt.first++;
            else
                akt = {1, n};

            if (akt.first > ans.first)
                ans = akt;

            was = true;
        }
        else
        {
            akt = {0, 0};
            was = false;
        }
    }   
    cout << ans.first << ' ' << ans.second << '\n';
}