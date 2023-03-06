#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
using namespace std;

pair <double, double> p[10001];

double dist(const pair <double, double>& p1, const pair <double, double>& p2)
{
    double x = p2.first - p1.first, y = p2.second - p1.second;
    return sqrt(x * x + y * y);
}

int main()
{
    ifstream in("punkty.txt");

    for (int i = 1; i <= 1000; i++)
        in >> p[i].first >> p[i].second;
    
    pair <int, int> ans = {1, 1};
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (dist(p[i], p[j]) > dist(p[ans.first], p[ans.second]))
                ans = {i, j};
        }
    }
    cout << '(' << p[ans.first].first << ',' << p[ans.first].second << ") (" << p[ans.second].first << ',' << p[ans.second].second << ")\n";
    cout << fixed << setprecision(0) << dist(p[ans.first], p[ans.second]) << '\n';
}