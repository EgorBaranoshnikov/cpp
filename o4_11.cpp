#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

void q(vector<int> s)
{
    int f = s.size(), t;
    for (int i = 0; i < f / 2; i++)
    {
        t = s[i];
        s[i] = s[f - i - 1];
        s[f - i - 1] = t;
    }
    for (int i = 0; i < f; i++)
    {
        cout << s[i] << " ";
    }
}

int main()
{
    int a, x;
    cin >> a;
    vector<int> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    q(s);
}