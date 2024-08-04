#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    int a, b, a1 = 0, b1 = 0;
    for (int i = 1; i <= 4; ++i)
    {
       fin >> a;
       fin >> b;
       a1 = a1 + a;
       b1 = b1 + b;
    }
    if (a1 == b1)
    {
        cout << "DRAW";
    }
    if (a1 > b1)
    {
        cout << "1";
    }
    if (a1 < b1)
    {
        cout << "2";
    }
}