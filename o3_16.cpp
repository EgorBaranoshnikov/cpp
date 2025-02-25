#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long a, x, j, pr = 0;
    cin >> a >> x;
    x++;
    vector<long long> s(x, 1);
    s[0] = 0;
    s[1] = 0;
    for (long long i = 2; i <= x; i++)
    {
        if (s[i] == 1)
        {
            if (i >= a)
            {
                cout << i << endl;
                pr++;
            }
            for (j = i * i; j <= x; j = j + i)
            {
                s[j] = 0;
            }
        }
    }
    if (pr == 0)
    {
        cout << "Absent";
    }
}