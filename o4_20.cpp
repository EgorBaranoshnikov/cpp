#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sok()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    int aa = 0, bb = 0;
    int i = 0, j = n - 1;
    while (j - i > 0)
    {
        if (s[i] > s[j])
        {
            aa += s[i];
            i++;
        }
        else
        {
            aa += s[j];
            j--;
        }
        if (i <= j)
        {
            if (s[i] > s[j])
            {
                bb += s[i];
                i++;
            }
            else
            {
                bb += s[j];
                j--;
            }
        }
    }
    if (i == j)
    {
        aa += s[i];
    }
    cout << aa << " " << bb;
    return 0;
}

int main()
{   
    int t = 1;
    while (t--)
    {
        sok();
    }
}