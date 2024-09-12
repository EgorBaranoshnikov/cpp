#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long a, b, ch1 = 1, ch2 = 1, ch3 = 1, otv = 0, prov = 1;

    cin >> a >> b;
    
    for (int i = 1; i <= a * a; i++)
    {
        if ((ch1 + ch2) % b == 0)
        {
            for (int w = 1; w <= a; w++)
            {
                if ((ch1 + ch3) % b == 0 && (ch2 + ch3) % b == 0)
                {
                    otv++;
                }
                ch3++;
            }
        }
        if (prov < a)
        {
            ch2++;
            prov++;
            ch3 = 1;
        }
        else if (prov >= a)
        {
            ch1++;
            prov = 1;
            ch3 = 1;
            ch2 = 1;
        }
    }
    cout << otv;
}