#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long a, b, c, pr;
    cin >> a >> b;
    pr = a + b - 2;
    a = a - 1;
    b = b - 1;
    while (b > 0)
    {
        a = a % b;
        swap(a, b);
    }
    cout << pr - a;
}