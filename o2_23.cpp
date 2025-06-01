#include <iostream>
#include <algorithm>

using namespace std;

long long w, h, n;

bool rr(long long s)
{
    long long cols = s / w;
    long long rows = s / h;
    if (cols == 0 || rows == 0)
    {
        return false;
    }
    return (cols >= (n + rows - 1) / rows) || (rows >= (n + cols - 1) / cols);
}

long long r()
{
    long long left = 0;
    long long right = max(w, h) * n;
    while (left < right)
    {
        long long mid = left + (right - left) / 2;
        if (rr(mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    cin >> w >> h >> n;
    cout << r();
}