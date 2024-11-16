#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, q = 0;
    cin >> a;
    if (a % 2 == 1)
    {
        q++;
    }
    vector<int> s((a + q) / 2);
    vector<int> d((a - q) / 2);
    for (int i = 0; i < (a - q) / 2; i++)
    {
        cin >> s[i];
        cin >> d[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> s[((a + q) / 2) - 1];
    }
    for (int i = 1; i <= ((a + q) / 2); i++)
    {
        for (int j = 1; j <= ((a + q) / 2) - 1; j++)
        {
            if (s[j] < s[j - 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }
    for (int i = 1; i <= ((a - q) / 2); i++)
    {
        for (int j = 1; j <= ((a - q) / 2) - 1; j++)
        {
            if (d[j] > d[j - 1])
            {
                swap(d[j], d[j - 1]);
            }
        }
    }
    for (int j = 0; j < (a - q) / 2; j++)
    {
        cout << s[j] << " ";
        cout << d[j] << " ";
    }
    for (int j = 0; j < q; j++)
    {
        cout << s[((a + q) / 2) - 1] << " ";
    }
}