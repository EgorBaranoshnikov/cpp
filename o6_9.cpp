#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        for (int q = 0; q < b; q++)
        {
            if (b % (q + 2) == 0)
            {
                cout << q + 2 << endl;
                break;
            }
        }
    }
}