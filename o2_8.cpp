#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int max_ch = 0, max_n;
    cin >> s;
    vector<int> a(26);

    for (int i = 0; i < s.length(); i++)
    {
    a[s[i] - 97]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (max_ch < a[i])
        {
            max_ch = a[i];
            max_n = i;
        }
    }
    cout << (char)(max_n + 97);
}