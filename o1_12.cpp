#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int q(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return a * q(a - 1);
}

int main()
{
    int a, c;
    cin >> a;
    c = q(a);
    cout << c;
}