#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, mn, mx, pr;
    cin >> a;
    cin >> b;
    cin >> c;
    mx = max(a, max(b, c));
    mn = min(a, min(b, c));
    pr = a + b + c - mn - mx;
    cout << mn + pr - mx;
}