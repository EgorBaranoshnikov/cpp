#include <iostream>

using namespace std;

int main()
{
    int n, s, x, otv = 0;
    cin >> n;
    for (int f = 0; f < n; f++)
    {
        cin >> s >> x;
        for (int i = 0; i <= s; i++)
        {
            for (int j = 0; j <= s - i; j++)
            {
                for (int q = 0; q <= s - i - j; q++)
                {
                    if (i * j * q <= x)
                    {
                        otv++;
                    }
                }
            }
        }
        cout << otv << endl;
        otv = 0;
    }
}