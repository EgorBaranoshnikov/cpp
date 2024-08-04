#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

// https://codelessons.dev/ru/string-in-cplusplus/

int main()
{

    ifstream fin("input.txt");

    int a, b, c;
    fin >> a;
    fin >> b;
    fin >> c;
    if (a * b == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}