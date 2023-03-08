#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("napisy.txt");
    
    string s, ans;
    while (in >> s)
    {
        string tmp;
        if (ans.size() < 3 || ans.substr(ans.size() - 3, 3) != "XXX")
        {
            for (char c: s)
            {
                if (c >= '0' && c <= '9')
                {
                    tmp.push_back(c);
                    if (tmp.size() == 2)
                    {
                        int x = stoi(tmp);
                        if (x >= 65 && x <= 90)
                            ans.push_back(x);
                        tmp.clear();
                    }
                }
            }
        }
    }
    cout << ans << '\n';
}