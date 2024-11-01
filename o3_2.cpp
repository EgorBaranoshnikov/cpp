#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if ((i + j) % 3 == 0)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}