#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, q = 0, pr1 = 0, pr2 = 0;
    cin >> a;
    if (a % 2 == 1)
    {
        q = 1;
    }
    pr1 = a / 2 + q;
    pr2 = a / 2;
    vector<int> b(pr1);
    vector<int> c(pr2);

    for (int i = 0; i < a / 2 + 2; i++)
    {
        if (pr1 > 0)
        {
            cin >> b[i];
        }
        if (pr2 > 0)
        {
            cin >> c[i];
        }
        pr1--;
        pr2--;
    }
    pr1 = a / 2 + q;
    pr2 = a / 2;

    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    for (int i = 0; i < a / 2 + 2; i++)
    {
        if (pr1 > 0)
        {
            cout << b[i] << " ";
        }
        if (pr2 > 0)
        {
            cout << c[a / 2 - i - 1] << " ";
        }
        pr1--;
        pr2--;
    }
}