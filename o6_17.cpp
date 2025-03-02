#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    long long a, b, c, b1;
    cin >> a >> b;
    b1 = b;
    c = a * b;
    while (b > 0)
    {
        a = a % b;
        swap(a, b);
    }
    cout << c / a / b1;
}