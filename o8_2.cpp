#include <iostream>

using namespace std;

int main()
{
    long a, b, su = 0, tek;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a * b; i++)
    {
        cin >> tek;
        su = su + tek;
    }
    cout << su;
}