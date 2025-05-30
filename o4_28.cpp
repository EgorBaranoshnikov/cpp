#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> s(n, 0);
    int a1, a2;
    for (int i = 0; i < m; ++i)
    {
        cin >> a1 >> a2;
        s[a1 - 1]++;
        s[a2 - 1]++;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << s[i] << " ";
    }
}