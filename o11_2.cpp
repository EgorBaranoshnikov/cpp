#include <iostream>

using namespace std;

int main()
{
    long a, sh1 = 1, sh2, max = 0, tek;
    cin >> a;
    sh2 = a - 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < sh1; j++)
        {
            cin >> tek;
        }
        for (int j = 0; j < sh2; j++)
        {
            cin >> tek;
            if (tek > max)
            {
                max = tek;
            }
        }
        sh1++;
        sh2--;
    }
    cout << max;
}