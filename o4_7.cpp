#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < a; q++)
        {
            if ((i + q) % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}