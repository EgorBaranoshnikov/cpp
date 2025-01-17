#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int q(int a, int p, int otv)
{
    if (p == a)
    {
        return otv;
    }
    else
    {
        otv = otv + p;
        p++;
    }
}

int main()
{
    int a, p, c, otv;
    cin >> a;
    otv = 0;
    p = 1;
    c = q(a, p, otv);
    cout << c;
}