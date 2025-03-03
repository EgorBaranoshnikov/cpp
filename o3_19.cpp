#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int a1, a2, b, c;
    cin >> a1 >> a2;
    vector<int> s1(a1);
    vector<int> s2(a1);
    for (int i = 0; i < a1; i++)
    {
        cin >> s1[i];
    }
    s2 = s1;
    for (int i = 0; i < a2; i++)
    {
        cin >> b >> c;
        if (b == 1)
        {
            s1[c - 1] = 1 - s1[c - 1];
            s2 = s1;
        }
        if (b == 2)
        {
            sort(s2.begin(), s2.end());
            cout << s2[a1 - c] << endl;
        }
    }
}