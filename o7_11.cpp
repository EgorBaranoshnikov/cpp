#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int q(int a, int b, vector<int> s)
{
    int f = 0, l;
    for (int i = 0; i < a; i++)
    {
        if (b < s[i])
        {
            f++;
        }
    }
    return (f);
}

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    vector<int> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    c = q(a, b, s);
    cout << c;
}