#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int min(int l, int k)
{
    int f;
    if (l > k)
    {
        return k;
    }
    else
    {
        return l;
    }
}
int main()
{
    int s, a, b, c, d;
    a = 150;
    b = 8;
    c = 1200;
    d = 22;
    s = min(min(a, b), min(c, d));
    cout << s;
}