#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, pr = 0, e = 0;
    int b[4];
    int c[2];
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b[0] >> b[1] >> b[2] >> b[3];
        for (int q = 0; q < 3; q++)
        {
            for (int j = 0; j < 3 - q; j++)
            {
                if (b[q] == b[1 + j + q])
                {
                    pr++;
                    break;
                }
            }
        }
    }
}