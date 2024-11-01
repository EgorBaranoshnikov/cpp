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
            for (int o = 1; o <= a; o++)
            {
                if ((i + j + o) == a)
                {
                    cout << i << " " << j << " " << o << endl;
                }
            }
        }
    }
}