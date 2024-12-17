#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int q = 0;
    string a, b;
    cin >> a >> b;
    vector<int> s1(26);
    vector<int> s2(26);
    for (int i = 0; i < a.length(); i++)
    {
        s1[a[i] - 65]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        s2[b[i] - 65]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "NO";
            q++;
            break;
        }
    }
    if (q == 0)
    {
        cout << "YES";
    }
}