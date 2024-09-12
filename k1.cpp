#include <iostream>

using namespace std;

int main()
{
    long long a, b, otv = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        otv = otv + b;
    }
    cout << otv;
}