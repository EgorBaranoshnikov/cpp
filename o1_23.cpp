#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, x, y;
    cin >> N >> x >> y;
    int L = 0, R = min(x, y) * N;
    while (R - L > 1)
        {
            int k = (R + L) / 2;
            if (k / x + k / y >= N - 1)
            {
                R = k;
            }
            else
            {
                L = k;
            }
        }
        cout << R + min(x, y);
}