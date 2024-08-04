#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    string a, c, d;
    int b;
    fin >> a;
    c = a[1];
    b = stoi(c);
    d = a[0];
    if (b % 2 == 0)
    {
        if (d == "A" || d == "C" || d == "E" || d == "G")
        {
            cout << "WHITE";
        }
        else
        {
            cout << "BLACK";
        }
    }
    else
    {
        if (d == "A" || d == "C" || d == "E" || d == "G")
        {
            cout << "BLACK";
        }
        else
        {
            cout << "WHITE";
        }
    }
}