#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, otv = 0, pr;
    string k;
    cin >> n >> k;
    int l = 0, r = n - 1;

    if (n % 2 == 0)
    {
        cout << -1;
        return 0;
    }
    if (k[(n - 1) / 2] != "b"[0])
    {
        cout << -1;
        return 0;
    }

    for (int i = ((n - 1) / 2) - 1; i >= 0; i--)
    {
        pr = (i + 1) % 3;
        if (pr == 1)
        {
            if (k[l] != 'a' || k[r] != 'c')
            {
                cout << -1 << endl;
                return 0;
            }
        }
        else if (pr == 2)
        {
            if (k[l] != 'c' || k[r] != 'a')
            {
                cout << -1 << endl;
                return 0;
            }
        }
        else
        {
            if (k[l] != 'b' || k[r] != 'b')
            {
                cout << -1 << endl;
                return 0;
            }
        }
        l++;
        r--;
    }
    cout << (n - 1) / 2;
}