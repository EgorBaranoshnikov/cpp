#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

float distance(int a, int b, int c, int d)
{
    int f, max1, min1, max2, min2, k1, k2, g;
    float otv;
    if (a > c)
    {
        max1 = a;
        min1 = c;
    }
    if (c >= a)
    {
        max1 = c;
        min1 = a;
    }
    if (b > d)
    {
        max2 = b;
        min2 = d;
    }
    if (d >= b)
    {
        max2 = d;
        min2 = b;
    }
    k1 = max1 - min1;
    k2 = max2 - min2;
    g = (k1 * k1) + (k2 * k2);
    otv = pow(g, 0.5);

    return otv;
}
int main()
{
    int a, b, c, d;
    float s;
    a = 0;
    b = 0;
    c = 1;
    d = 1;
    s = distance(a, b, c, d);
    cout << s;
}