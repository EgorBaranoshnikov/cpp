#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, a1, b1, otv, q;
    cin >> q;
    vector<long long> s(q);
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        for (int j = 1; j <= 3; j++)
        {
            cin >> a1 >> b1;
            if (a1 == a)
            {
                if (b > 0 && b1 > 0)
                {
                    otv = max(b, b1) - min(b, b1);
                }
                else
                {
                    if (b < 0 && b1 < 0)
                    {
                        b = abs(b);
                        b1 = abs(b1);
                        otv = max(b, b1) - min(b, b1);
                    }
                    else
                    {
                        b = abs(b);
                        b1 = abs(b1);
                        otv = max(b, b1) + min(b, b1);
                    }
                }
                s[i] = otv * otv;
            }
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout << s[i] << endl;
    }
}