#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    string a, b, c, d;
    int tek = 0;
    fin >> a;
    fin >> b;
    fin >> c;
    fin >> d;
    for (int i = 0; i <= 2; i++)
    {
        if (a[i] == a[i + 1] && a[i] == b[i] && a[i] == b[i + 1])
        {
            cout << "No";
            tek = tek + 1;
            break;
        }
    }
    if (tek == 0)
    {
        for (int i = 0; i <= 2; i++)
        {
            if (b[i] == b[i + 1] && b[i] == c[i] && b[i] == c[i + 1])
            {
                cout << "No";
                tek = tek + 1;
                break;
            }
        }
    }
    if (tek == 0)
    {
        for (int i = 0; i <= 2; i++)
        {
            if (c[i] == c[i + 1] && c[i] == d[i] && c[i] == d[i + 1])
            {
                cout << "No";
                tek = tek + 1;
                break;
            }
        }
    }
    if (tek == 0)
    {
        cout << "Yes";
    } 
}