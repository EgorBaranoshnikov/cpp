#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int L = 0, R = 0;
    while (L != s1.length() && R != s2.length())
    {
        if (s1[L] == s2[R])
        {
            L++;
            R++;
        }
        else
        {
            R++;
        }
    }
    if (L == s1.length())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}