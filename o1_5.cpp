#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, otv = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int w = 1; w <= a; w++)
        {
            for (int e = 1; e <= a; e++)
            {
                if (i + w + e == a)
                {
                    otv++;
                }
            }
        }
    }
    cout << otv;
}