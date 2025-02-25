#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a, b, c, otv = 0, aa, pr;
    cin >> aa;
    for (int i = 0; i < aa; i++)
    {
        cin >> a >> b >> c;
        otv += a;
        if (b % 3 == 0)
        {
            otv += b / 3;
            if (c % 3 == 0)
            {
                otv += c / 3;
            }
            else
            {
                otv += c / 3 + 1;
            }
            cout << otv << " ";
        }
        else
        {
            if (c + (b % 3) < 3)
            {
                cout << "-1" << " ";
            }
            else
            {
                if ((c + b) % 3 == 0)
                {
                    pr = (c + b) / 3;
                }
                else
                {
                    pr = (c + b) / 3 + 1;
                }
                otv += pr;
                cout << otv << " ";
            }
        }
        otv = 0;
    }
}