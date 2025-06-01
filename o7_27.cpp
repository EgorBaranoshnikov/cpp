#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;

    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        q.push({i + 1, a});
    }

    int x = 0;
    while (!q.empty())
    {
        auto xx = q.front();
        q.pop();
        x = xx.first;
        xx.second -= m;
        if (xx.second > 0)
        {
            q.push(xx);
        }
    }

    cout << x;
}