#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int q(int a, int b, int x)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    else
    {
        a = a * x;
        b--;
        return q(a, b, x);
    }
}

int main()
{
    int a, b, c, x;
    cin >> a >> b;
    x = a;
    c = q(a, b, x);
    cout << c;
}