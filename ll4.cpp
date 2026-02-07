#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, otv = 0;
    string k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        cout << -1;
    }
    else if (k[n / 2] != "b"[0])
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (k[i] == "a"[0])
            {
                if (k[i + 1] == "b"[0])
                {
                   otv++;
                }
                else
                {
                    cout << -1;
                    break;
                }
            }
            if (k[i] == "b"[0])
            {
                if (k[i + 1] == "c"[0])
                {
                   otv++;
                }
                else
                {
                    cout << -1;
                    break;
                }
            }
            if (k[i] == "c"[0])
            {
                if (k[i + 1] == "a"[0])
                {
                   otv++;
                }
                else
                {
                    cout << -1;
                    break;
                }
            }
        }
        cout << n / 2;
    }
}