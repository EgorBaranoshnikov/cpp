#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long rr(const vector<int> &h, int X)
{
    long long total = 0;
    for (int health : h)
    {
        total += (health + X - 1) / X;
    }
    return total;
}

int r(const vector<int> &h, long long m)
{
    int left = 1;
    int right = *max_element(h.begin(), h.end());
    int answer = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        long long hits = rr(h, mid);

        if (hits <= m)
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return answer;
}

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }
    long long m;
    cin >> m;

    cout << r(h, m);
}