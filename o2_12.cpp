#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

bool q(int a)
{
    if (a == 1)
    {
        return 1;
    }
    if (a % 2 != 0)
    {
        return 0;
    }
    a = a / 2;
    return q(a);
}

int main()
{
    bool c;
    int a;
    cin >> a;
    c = q(a);
    if (c == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}