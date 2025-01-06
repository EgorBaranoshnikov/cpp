#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int q(int a, int b1, int b2, int t)
{
    if (a == 0)
    {
        return t;
    }
    else
    {
        int pr;
        pr = t;
        t = t + b2;
        b1 = b2;
        b2 = pr;
        a--;
        return q(a, b1, b2, t);
    }
}

int main()
{
    int a, b1, b2, c, t;
    cin >> a;
    a = a - 2;
    b1 = 0;
    b2 = 1;
    t = 1;
    if (a == -1)
    {
        cout << 1;
    }
    if (a == -2)
    {
        cout << 0;
    }
    if (a >= 0)
    {
        c = q(a, b1, b2, t);
        cout << c;
    }
}