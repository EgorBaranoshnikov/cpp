#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int f;
    string a;
    cin >> a;
    vector<int> b(a.length() / 2 + 1);
    for (int i = 0; i < a.length() / 2 + 1; i++)
    {
        f = a[i * 2] - '0';
        b[i] = f;
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < a.length() / 2 + 1; i++)
    {
        cout << b[i];
        if (i != a.length() / 2)
        {
            cout << "+";
        }
    }
}