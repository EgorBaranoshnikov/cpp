#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long a = 2, b = 1, c;
    long double sh = 1, nm = 1;
    cin >> c;
    for (int i = 0; i < c; ++i)
    {
        sh = sh * a * a;
        a = a + 2;
        nm = nm * b * (b + 2);
        b = b + 2;
    }
    cout << (sh * 2) / nm;
}