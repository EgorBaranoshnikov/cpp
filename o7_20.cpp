#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a;
        string b;
        cin >> a >> b;
        int i1 = 0, i2 = a - 1, otv = a;
        while ((i2 - i1) != 0 && (i2 - i1) != -1)
        {
            if (((b[i1]) - '0') + ((b[i2]) - '0') == 1)
            {
                otv = otv - 2;
                i1++;
                i2--;
            }
            else
            {
                break;
            }
        }
        cout << otv << endl;
    }
}