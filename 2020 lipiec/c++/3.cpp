#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string ident[200];
int w[8] = {7, 3, 1, 7, 3, 1, 7, 3};

int main()
{
    ifstream in("identyfikator.txt");
    ofstream out("wyniki4_3.txt");
    
    for (int i = 0; i < 200; i++)
        in >> ident[i];
    
    for (int i = 0; i < 200; i++)
    {
        int suma = 0;
        for (int j = 0; j < 3; j++)
            suma += (ident[i][j] - 'A' + 10) * w[j];
        for (int j = 4; j < ident[i].size(); j++)
            suma += (ident[i][j] - '0') * w[j - 1];
        
        if (suma % 10 != (ident[i][3] - '0'))
            out << ident[i] << '\n';
    }
}