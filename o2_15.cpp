#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(0);
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {
                s.push_back(i);
            }
            else
            {
            s.push_back(i);
            s.push_back(n / i);
            }
        }
    }
    sort(s.begin(), s.end());
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
    {
         cout << s[i] << " ";
    }
}