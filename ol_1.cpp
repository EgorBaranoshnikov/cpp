#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    int b, c = 0, q[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    string a;
    cin >> a;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == "1"[0] || a[i] == "2"[0] || a[i] == "3"[0] || a[i] == "4"[0] || a[i] == "5"[0] || a[i] == "6"[0] || a[i] == "7"[0] || a[i] == "8"[0] || a[i] == "9"[0] || a[i] == "0"[0])
        {
            b = a[i] - "0"[0];
            c = c + b;
        }
    }
    cout << q[c - 36];
}