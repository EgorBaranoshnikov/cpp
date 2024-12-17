#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b % 2 == 0)
        {
            cout << (b + 1) * (b / 2) << endl;
        }
        if (b % 2 == 1)
        {
            cout << (b + 2) * (b / 2) + 1 << endl;
        }
    }
}