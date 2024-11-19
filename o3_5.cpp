#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, cnt = 0;
    cin >> a;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < a - 2; i++)
    {
        for (int i = 0; i < a - 1; i++)
        {
            for (int i = 0; i < a; i++)
            {
                cin >> s[i];
            }
        }
    }
} 