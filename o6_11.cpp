#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int q(int a, int b)
{
    if (b != 0)
    {
        int f = a;
        for (int i = 0; i < b - 1; i++)
        {
            a = a * f;
        }
        return (a);
    }
    else
    {
        return (1);
    }
}

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    c = q(a, b);
    cout << c;
}