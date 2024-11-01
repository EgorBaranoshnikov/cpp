#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, pr = 0, sh1, sh2;
    int b[4];
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b[0] >> b[1] >> b[2] >> b[3];
        for (int q = 0; q < a; q++)
        {
            for (int j = 0; j < a - q - 1; j++)
            {
                 if (b[q] == b[j])
                 {
                    pr++;
                 }
            }
        }
        for (int q = 0; q < a; q++)
        {

        }
    }
}