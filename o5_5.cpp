#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, pr = 0;
    int b[4];
    int s[2];
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b[0] >> b[1] >> b[2] >> b[3];

        for (int i = 0; i < 4; i++)
        {
            for (int q = 0; q < 4; q++)
            {
                if (b[i] == b[q] && i != q)
                {
                    pr++;
                }
            }
            if (pr )
        }


    }
}