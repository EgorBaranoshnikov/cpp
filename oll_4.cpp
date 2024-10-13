#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    string a, c;
    int b;
    cin >> a;
    b = a.length();
    for (int i = 0; i < b; i++)
    {
        if (a[i] == "!"[0] || a[i] == "?"[0] || a[i] == ","[0] || a[i] == "."[0] || a[i] == ":"[0])
        {
            a += "a";
        }
    }
}