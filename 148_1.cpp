#include <stdio.h>
#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> a >> b;

    c = 12 % 7;
    while (b)
    {
        a = a % b;
        b = b ^ a;
        a = a ^ b;
        b = b ^ a;
    }
    // b ^= a ^= b ^= a %= b;
    cout << a;
    return 0;
}
