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
    string a;
    int b;
    fin >> a;
    fin >> b;
    if (a == "Home")
    {
            cout << "Yes";
    }
    if (a == "School")
    {
        if (b % 2 == 0)
        {
            cout << "No";
        }
        if (b % 2 == 1)
        {
            cout << "Yes";
        }
    }
}