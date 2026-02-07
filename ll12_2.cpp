#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, otv = 0, ottv = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        otv = 0;
        for (int j = 1; j < pow(n, 0.5); j++)
        {
            if (i % j == 0)
            {
                otv++;
            }
        }
        if (otv == 9)
        {
            ottv++;
        }
    }
    cout << ottv;
}