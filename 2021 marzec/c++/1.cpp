#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

string kraj[50], miasto[50];
int sklep[50][140];
map <string, int> m;

int main()
{
    ifstream in("galerie.txt");
    ofstream out("wynik4_1.txt");
    
    for (int i = 0; i < 50; i++)
    {
        in >> kraj[i] >> miasto[i];
        for (int j = 0; j < 140; j++)
            in >> sklep[i][j];
    }

    for (int i = 0; i < 50; i++)
        m[kraj[i]]++;
    
    for (pair <string, int> x: m)
        out << x.first << ' ' << x.second << '\n';
}