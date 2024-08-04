#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    int a, b, c;
    fin >> a;
    fin >> b;
    if (a > b)
    {
        cout << ">";
    }
        if (a < b)
    {
        cout << "<";
    }
        if (a == b)
    {
        cout << "=";
    }
}