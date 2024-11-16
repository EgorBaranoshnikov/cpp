#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, pr = 0, tek, otv = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> tek;
            if (tek == 1)
            {
                pr++;
            }
        }
        if (pr >= 2)
        {
             otv++;
        }
        pr = 0;
    }
    cout << otv;
}