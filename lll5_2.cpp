#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long tom = 1, kol = n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        if (p[i] == tom)
        {
            tom++;
            kol--;
        }
        else if (p[i] > tom)
        {
            if (kol >= 2)
            {
                tom++;
                kol -= 2;
                n--;
            }
            else
            {
                break;
            }
        }
    }
    if (kol % 2 == 0)
    {
        cout << (tom - 1) + (kol / 2);
    }
    if (kol % 2 == 1)
    {
        cout << (tom - 1) + ((kol - 1) / 2);
    }
}