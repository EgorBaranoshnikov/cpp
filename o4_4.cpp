#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, q;
    cin >> a;
    vector<int> s(a / 2);
    for (int i = 0; i < a / 2; i++)
    {
        cin >> q;
        s[i] = q;
    }
    vector<int> d(a / 2);
    for (int i = 0; i < a / 2; i++)
    {
        cin >> q;
        d[i] = q;
    }
    for (int i = 1; i <= a / 2; i++)
    {
        for (int j = 1; j <= a / 2 - 1; j++)
        {
            if (s[j] < s[j - 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }
    for (int i = 1; i <= a / 2; i++)
    {
        for (int j = 1; j <= a / 2 - 1; j++)
        {
            if (d[j] < d[j - 1])
            {
                swap(d[j], d[j - 1]);
            }
        }
    }
    for (int j = 1; j <= a / 2; j++)
    {
        cout << s[j - 1] << " ";
    }
    for (int j = 1; j <= a / 2; j++)
    {
        cout << d[j - 1] << " ";
    }
}