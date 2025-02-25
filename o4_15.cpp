#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b;
    c = a * b;
    while (b > 0)
    {
        a = a % b;
        swap(a, b);
    }
    cout << c / a;
}