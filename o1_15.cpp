#include <iostream>

using namespace std;

int main()
{
    int n, otv = 0;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            otv++;
        }
    }
    cout << otv + 1;
}