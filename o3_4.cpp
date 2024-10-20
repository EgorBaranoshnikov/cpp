#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, q, w;
    cin >> a;
    cin >> w;
    q = a;
    vector<int> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> q;
        s[i] = q;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = a - 1; j > 0; j--)
        {
            if (s[j] > s[j - 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }
    cout << s[w - 1];
}