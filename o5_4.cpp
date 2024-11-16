#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, l, r;
    cin >> a;
    vector<int> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    cin >> l;
    cin >> r;
    for (int i = l; i <= r; i++)
    {
        for (int j = l; j <= r - 1; j++)
        {
            if (s[j] < s[j - 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << s[i] << " ";
    }
} 