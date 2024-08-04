#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    int b, a, otv, i;
    fin >> a;
    fin >> b;
    if (abs(a) + abs(b) <= 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}