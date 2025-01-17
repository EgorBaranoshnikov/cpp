#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int q(int a, int p, int otv)
{
    if (a == 0)
    {
        return 1;
    }
    if (p == (a + 1))
    {
        return otv;
    }
    else
    {
        otv = otv + p;
        p++;
        return q(a, p, otv);
    }
}

int main()
{
    int a, p, c, otv;
    cin >> a;
    otv = 0;
    p = 1;
    if (a < 0)
    {
        a = a * -1;
        c = q(a, p, otv);
        c--; 
        c = c * -1;
    }
    else
    {
        c = q(a, p, otv);
    }
    cout << c;
}