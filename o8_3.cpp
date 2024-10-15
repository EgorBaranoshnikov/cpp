#include <iostream>

using namespace std;

int main()
{
    long long a, b, c = 0, otv;
    cin >> a;
    a = a + 1;
    b = a * ((a - 1) / 2);
    if ((a - 1) % 2 == 1)
    {
        c = a / 2;
    }
    otv = b + c;
    cout << otv;
}